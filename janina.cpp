#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int i,j,k=1,a[100000],n,c=1;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]<=a[i+1]){
        c++;
        if(c>k)
        k=c;
    }
    else
        c=0;
    }
    cout<<k;

}
