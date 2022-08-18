// Problem: B. Balanced Array
// Contest: Codeforces - Codeforces Round #636 (Div. 3)
// URL: https://codeforces.com/contest/1343/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#define bismillah   ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define tata return 0;
#define vang "\n";
/*vector<int> v(n);
for(auto i:v) cout<<i<<" ";
*/
#define for(i_n) for(int i=0;i<n;i++)
using namespace std;
int main()
{
    bismillah;
int t;
cin>>t;
while(t--){
int n,x,y,i,sum1=0,sum2=0;
cin>>n;
vector<int>v1(n);

for(i=2;i<=n;i++){
	if(i%2==0){
     v1.push_back(i);

	}


}
/*for(i=3;i<=n;i++){
	if(i%2==1){


   v1.push_back(i);

	}


}*/
for(i=v1.begin();i<v1.end()-1;i++){
	cout<<i<<" ";
}
cout<<"\n";


}
tata;
}
