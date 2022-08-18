#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c,n;
    cin>>a>>b;
    n=a/7;
    n++;
    if((n-b)<=0)
        cout<<"0"<<endl;
    else
        cout<<n-b<<endl;


}
