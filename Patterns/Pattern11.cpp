/*

A B C
A B C
A B C

*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;
    while(i<=n){
        int j = 1;
        char str = 'A';
        while(j<=n){
            cout << str <<  " ";
            str = str + 1;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
}