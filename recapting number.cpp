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
    long long int a,b,c,d,m,n,t,c1=0,c2=0,c3=0,sum1=0,sum2=0,x,y,z;
    int arr[10000]={1,1,3,41,1,1,4,2,5,3},arr2[10000];
    unordered_map<int, int>arr1;
    string str,str1,str2;
    int maxValue= INT_MIN;

    for(i=0; i<9; i++){
        int value=arr[i];
        arr1[value]++;
        maxValue=max(arr1[value],maxValue);
    }

cout<<maxValue;

}

