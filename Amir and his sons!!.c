#include<bits/bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int n=max(max(a,b),max(b,c));
    cout<<n+1<<endl;
}
