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
    cin>>str;
    n=str.length();
    for(i=0;i<n;i++){
        if(str[i]>='a'&&str[i]<='z'){
           c1++;
            //cout<<"sum "<<str[i]<<" "<<c1<<endl;
        }
        if(str[i]>='A'&&str[i]<='Z'){
            c2++;
    }


}
if(c1==1||c2==n){
    for(i=0;i<n;i++){
        if(c2==n&&str[i]>='A'&&str[i]<='Z'){
            str[i]+=32;
        }
        if(c1==1&&str[i+1]>='A'&&str[i+1]<='Z'){
                str[i]+=32;

        }
         if(c1==1&&str[i]>='a'&&str[i]<='z'){
                str[i]-=32;

        }
            cout<<str[i];
    }

}
  else{
         for(i=0;i<n;i++)
             cout<<str[i];

}
}
