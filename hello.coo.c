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

int main() {
    string s;
    cin >> s;
    int curr = 1;
    for (char ch : s) {
        switch(ch) {
            case 'A':
                if (curr == 1) {
                    curr = 2;
                } else if (curr == 2) {
                    curr = 1;
                }
                break;
            case 'B':
                if (curr == 2) {
                    curr = 3;
                } else if (curr == 3) {
                    curr = 2;
                }
                break;
            case 'C':
                if (curr == 1) {
                    curr = 3;
                } else if (curr == 3) {
                    curr = 1;
                }
                break;
            default:
                cerr << "Incorrect input" << endl;
        }
    }
    cout << curr << endl;
    return 0;
}
