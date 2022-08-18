// Problem: A. Dragons
// Contest: Codeforces - Codeforces Round #142 (Div. 2)
// URL: https://codeforces.com/problemset/problem/230/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

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
int main()
{
    int i,j,k;
    long long int a,b,c,d,m,n,t,c1=0,c2=0,c3=0,sum1=0,sum2=0,x,y,z;
    int arr[10000],arr1[10000],arr2[10000];
    string str,str1,str2;
    bool check=true;
    cin>>a>>b;
    for(i=0; i<b; i++)
    {
       cin>>arr[i]>>arr1[i];
       arr2[i]=arr[i];
    }
    sort(arr,arr+b);
    for(i=0;i<b;i++){
            if(arr[i]<a){
                for(j=0;j<b;j++){
                	//cout<<a<<" "<<arr[i]<<" "<<arr2[j]<<" "<<arr1[j]<<endl;
            if(arr[i]==arr2[j]){
                //cout<<arr[i]<<" "<<arr2[j]<<" "<<arr1[j]<<endl;
                a+=arr1[j];
                arr2[j]=0;
                break;
        }
            }
            }
            else{
                check=false;
                break;
            }
    }
    if(check==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

