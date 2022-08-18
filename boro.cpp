// Problem: A. Maximum Increase
// Contest: Codeforces - Educational Codeforces Round 15
// URL: https://codeforces.com/problemset/problem/702/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main(){

	long long int a=1,b,c=0,c1=0,i,j,k,t,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){

		if(arr[i]>a){
			c++;
			a=arr[i];
		}
		else{
            arr[i]

		}
	}
	cout<<c<<endl;

}
