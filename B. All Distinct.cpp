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
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,c,d,t,ct=1;
    int arr[10000],arr1[1000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];

        }
        sort(arr,arr+n);
        int j=0;
        for(int i=1; i<n; i++)
        {
           // cout<<arr[i]<<" "<<arr[i-1]<<endl;

            if(arr[i]==arr[i-1])
            {
                i++;
            }
            else
            {
                ct++;
            }
        }
        int m=sizeof(arr1)/sizeof(arr1[0]);
        cout<<ct<<endl;

    }


}
