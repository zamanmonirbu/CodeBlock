#include<bits/stdc++.h>
using namespace std;
string twoPointer(string c){
    int n;
    n=sizeof(c);
    int start=0,last=n-1;
    while(start<=last)
    {
     swap(c[start],c[last]);
     start++;
        last--;
    }
        return twoPointer;
}

int main(){
    vector <string> c;
//    int n;
//    n=sizeof(c);
//    for()

cout<<twoPointer("h","e","l","l","o");

}

