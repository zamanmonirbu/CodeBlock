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
    int arr[10000],arr1[10000],arr2[10000];
    string str,str1,str2;
    cin>>n;
    t=n;
     if(n%4==0||n%7==0){
       cout<<"YES"<<endl;
       return 0;
    }
    while(n>0){
            c2++;
        int rem=n%10;
        n=n/10;
        if(rem==7){
            c1++;
        }
        else if(rem==4){
            c1++;
        }

    }
   // cout<<c1<<" "<<c2<<endl;
if(c1==c2){
    cout<<"YES"<<endl;
}
else
        cout<<"NO"<<endl;


}


