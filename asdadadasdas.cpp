/*
n=str.length();//string length/size
n=sizeof(arr)/sizeof(array1[0]);//arry length/size
sort(str.begin(),str.end());//string sorting
sort(arr,arr+n);//array sorting
transform(str.begin(), str.end(), str.begin(), ::toupper); //lower to upper case
transform(str.begin(), str.end(), str.begin(), ::tolower);//upper to lower
cout<<setprecision(n)<<fixed;//fixed value after decimal point
*max_element(arr, arr + n);//max value from arry
*min_element(arr, arr + n);//min value from arry
min(a,b);
max(a,b);
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,x;
    long long int n;
    cin>>n>>x;
    int a[n+1];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    double ans=max(a[0], x-a[n-1]);
    for(i=1; i<n; i++){
        k=max(k, a[i]-a[i-1]);
    }
    ans=max(ans*1.0, k/2.0);

    printf("%.10f\n",ans);
}

