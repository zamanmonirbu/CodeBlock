/*
n=str.length();//string length/size
n=sizeof(arr)/sizeof(array1[0]);//arry length/size
sort(str.begin(),str.end());//string sorting
sort(arr,arr+n);//array sorting
transform(str.begin(), str.end(), str.begin(), ::toupper); //lower to upper case
transfrm(str.begin(), str.end(), str.begin(), ::tolower);//upper to lower
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
    long long int m,n,t,c1=0,c2=0,c3=0,sum1=0,sum2=0,x,y,z;
    double a,b,c,d,e,f,g,h;
    int arr[10000],arr1[10000],arr2[10000];
    string str,str1,str2;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        e=a/c*1.0;
        f=b/d*1.0;
        //cout<<e<<" "<<f<<endl;
        if(e==f){
            cout<<"0"<<endl;
        }
        else  if((a==c &&b!=d)||(a!=c&&b==d)){
            cout<<"1"<<endl;
        }
        else{
           cout<<"2"<<endl;
        }
    }



}

