#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,str1,str2;
    int t;
	cin>>t;
	while(t--){
		cin>>str>>str1;
		int n,i,a,sum1=0;
		n=str1.length();
		for(i=1;i<n;i++){


			a=(str.find(str1[i])-str.find(str1[i-1]));
			sum1+=abs(a);

		}
		cout<<sum1<<endl;
	}

}
