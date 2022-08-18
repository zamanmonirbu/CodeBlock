#include<bits/stdc++.h>
using namespace std;
int main()
{
int size;
cout <<"Enter size of vector\n";
cin>>size;
cout<<"Now to input the vector of size "<<size<<endl;
vector <int> trial;
for (size_t i=0;i<size;++i){
    int x;
    cout<<"write at position"<<trial.at(i)<<'t';
    cin>>x;
    trial.push_back(x);
    cout<<endl;
}
ostream_iterator<int> output(cout,"");
copy(trial.begin(),trial.end(),output);
}

