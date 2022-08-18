#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     string s;
     cin>>n;
     map <string, int> mp;
     int i=0;
     while(n--)
     {
         cin>>s;
         if(mp[s]==0){mp[s]=1;cout<<"ok"<<endl;}
         else
         {
            // i++;
             cout<<s<<mp[s]<<endl;mp[s]=mp[s]+1;
         }

     }

}
