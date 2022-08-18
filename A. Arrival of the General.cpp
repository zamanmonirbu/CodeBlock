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
    int i,j,k;
    int a,b,c,d,m,n,t,c1=0,c2=0,c3=0,sum1=0,sum2=0,x,y,z,count1=0,count2=0;
    int arr[10000],arr1[10000],arr2[10000];
    string str,str1,str2;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    a=*max_element(arr, arr + n);//max value from arry
    b=*min_element(arr, arr + n);//min value from arry
    //cout<<a<<" "<<b;
    for(i=0;i<n;i++){
        if(a==arr[i]&&count1==0){
            c=i;
            count1++;
        }
         if(b==arr[i]){
            d=i;

        }

    }

    //cout<<c<<" "<<d<<endl;

    if(c>d){
        cout<<(c+(n-d)-2)<<endl;
    }
    else
    cout<<(c+(n-d)-1)<<endl;



}

