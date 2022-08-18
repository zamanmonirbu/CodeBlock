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
    int n,t,ct=0,i,j,c1=0,c2=0,m;
    char a[8][8],b,d;
    int arr[10000],arr1[1000];
    cin>>t;
     m=t;
    while(t--){
        for(i=1;i<=8;i++){
            for(j=1;j<=8;j++){
                cin>>a[i][j];


            }
        }
        cout<<m<<endl;

               for(i=2;i<=7;i++){
                for(j=1;j<=8;j++){
                if((a[i][j]=='#')&&(a[i][j+1]=='.')&&(a[i][j+2]=='#')&&(a[i+1][j+1]=='#')&&(a[i+2][j]=='#')&&(a[i+2][j+1]=='.')&&(a[i+2][j+2]=='#')){
                    cout<<i+1<<" "<<j+1<<endl;
                    c2++;
                    if(c2==arr[0]){
                        return 0;
                    }
                }
            }

    }



    }
    return 0;

}
