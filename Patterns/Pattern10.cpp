/*

A A A
B B B
C C C

*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;
    char str = 'A';
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << str <<  " ";
            j = j+1;
        }
        str = str + 1;
        cout<<endl;
        i = i+1;
    }
}