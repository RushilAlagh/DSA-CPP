/*

* * * *
* * *
* * 
* 

*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;
    int k = n;
    while(i<=n){
        int j = 1;
        while(j<=k){
            cout << "*";
            j = j+1;
        }
        k = k-1;
        cout<<endl;
        i = i+1;
    }
}