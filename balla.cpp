// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

class Proto_Van_Emde_Boas {
public:
	// Total number of keys
	int universe_size;

	// Summary
	Proto_Van_Emde_Boas* summary;

	// Clusters array of Proto-VEB pointers
	vector<Proto_Van_Emde_Boas*> clusters;

	int root(int u)
	{
		return int(sqrt(u));
	}

	// Function to return cluster numbers
	// in which key is present
	int high(int x)
	{
		return x / root(universe_size);
	}

	// Function to return position of x in cluster
	int low(int x)
	{
		return x % root(universe_size);
	}

	// Function to return the index from
	// cluster number and position
	int generate_index(int cluster, int position)
	{
		return cluster * root(universe_size) + position;
	}

	// Constructor
	Proto_Van_Emde_Boas(int size)
	{
		universe_size = size;

		// Base case
		if (size <= 2) {

			// Set summary to nullptr as there is no
			// more summary for size 2
			summary = nullptr;

			// Vector of two pointers
			// nullptr in starting
			clusters = vector<Proto_Van_Emde_Boas*>(size, nullptr);
		}
		else {

			// Assigning Proto-VEB(sqrt(u)) to summary
			summary = new Proto_Van_Emde_Boas(root(size));

			// Creating array of Proto-VEB Tree pointers of size sqrt(u)
			// first all nullptrs are going to assign
			clusters = vector<Proto_Van_Emde_Boas*>(root(size), nullptr);

			// Assigning Proto-VEB(sqrt(u)) to all its clusters
			for (int i = 0; i < root(size); i++) {
				clusters[i] = new Proto_Van_Emde_Boas(root(size));
			}
		}
	}
};

// Function that returns true if the
// key is present in the tree
bool isMember(Proto_Van_Emde_Boas* helper, int key)
{
	// If key is greater then universe_size then
	// returns false
	if (key >= helper->universe_size)
		return false;

	// If we reach at base case
	// the just return whether
	// pointer is nullptr then false
	// else return true
	if (helper->universe_size == 2) {
		return helper->clusters[key];
	}
	else {

		// Recursively go deep into the
		// level of Proto-VEB tree using its
		// cluster index and its position
		return isMember(helper->clusters[helper->high(key)],
						helper->low(key));
	}
}

// Function to insert a key in the tree
void insert(Proto_Van_Emde_Boas*& helper, int key)
{
	// If we reach at base case
	// then assign Proto-VEB(1) in place
	// of nullptr
	if (helper->universe_size == 2) {
		helper->clusters[key] = new Proto_Van_Emde_Boas(1);
	}
	else {

		// Recursively using index of cluster and its
		// position in cluster
		insert(helper->clusters[helper->high(key)],
			helper->low(key));

		// Also do the same recursion in summary VEB
		insert(helper->summary, helper->high(key));
	}
}

// Driver code
int main()
{
	Proto_Van_Emde_Boas* hello = new Proto_Van_Emde_Boas(4);

	cout << isMember(hello, 3);

	insert(hello, 3);

	cout << isMember(hello, 3);
}
