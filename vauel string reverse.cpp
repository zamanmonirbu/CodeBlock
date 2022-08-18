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

bool vowel(char c){
    if(c>='A'&&c<='Z')
        c+=32;
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        return true;
    }
    return false;
}

string reverseString(string s){
    int n=s.size();
    int start=0,end=n-1;
    while(start<=end){
        if((vowel(s[start])==true)&&(vowel(s[end])==true)){
            swap(s[start],s[end]);
            start++;
            end--;
        }
        else{
            if(vowel(s[start])==false){
                start++;
            }
            if(vowel(s[end])==false){
                end--;
            }
        }
    }
    return s;
}

int main(){
    int i,j,k;
    long long int a,b,c,d,m,n,t,c1=0,c2=0,c3=0,sum1=0,sum2=0,x,y,z;
    int arr[10000],arr1[10000],arr2[10000];
    string str,str1,str2;
    cin>>str;
    cout<<(reverseString(str));


}

