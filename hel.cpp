#include<bits/stdc++.h>
using namespace std;
using namespace std;
int result(int x)
{
    int sum=0;
    while(x)
    {
        sum+=x%10;
        x/=10;
    }
    return sum;
}
int main()
{
    int l,d,x,i;
    cin>>l>>d>>x;
    for(i=l;i<=d;i++)
        if(result(i)==x)
        {
            cout<<i<<endl;
            break;
        }
    for(i=d;i>=l;i--)
        if(result(i)==x)
        {
            cout<<i<<endl;
            break;
        }
    return 0;
}
