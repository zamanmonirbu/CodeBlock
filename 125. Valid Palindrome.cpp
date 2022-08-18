#include<bits/stdc++.h>
using namespace std;
void check(string s){
    int n=s.size();
    string c;
    int j=0;
    for(int i=0;i<n;i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
        {
            c[j]=s[i];
            j++;
        }
    }
     for(int i=0;i<j;i++){
     cout<<c[i]<<endl;

     }

}
int main(){
    string a,b,c;
    a="A man, a plan, a canal: Panama";
    check(a);



}
