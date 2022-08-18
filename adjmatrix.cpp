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
    int number_vertex,m,n;
    cin>>number_vertex;
    int adj[number_vertex][number_vertex];
    for(i=0;i<number_vertex;i++){
        for(j=0;j<number_vertex;j++){
            adj[i][j]=0;
        }
    }
int number=number_vertex;
        while(number_vertex--){
            cin>>m>>n;
            adj[m][n]=1;
            adj[n][m]=1;
        }

          for(i=0;i<number;i++){
            for(j=0;j<number;j++){
                cout<<" "<<adj[i][j];
            }
            cout<<"\n";
          }


        }


