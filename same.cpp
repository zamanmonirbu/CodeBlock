#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5 + 1;

const int MOD = 1e9 + 7;

const int INF = 1e9;

void solve() {

int n;

cin>>n;

char arr[n];

for(int i=0;i<n;i++)

{

    cin>>arr[i];

}

int a[n];

bool flag = true;

for(int i=0;i<n;i++)

{

    a[i] = arr[i]-'0';

}

for(int i=0;i<n;i++)

{

    if(a[i] <= a[i+1])

    {

        flag = true;

    }

}

if(flag)

{

    cout<<"YES"<<"\n";

}

else

{

    cout<<"NO"<<"\n";

}
}

int main() {

ios_base::sync_with_stdio(0);

cin.tie(0); cout.tie(0);

int tc ;

cin>>tc;

while(tc--)

{

  solve();

}

return 0;
}
