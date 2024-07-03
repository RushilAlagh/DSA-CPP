/*

A 
B C
C D E
D E F G

*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;
    char str = 'A';
    char str2 = 'A';
    
    while(i<=n){
        str = str2;
        int j = 1;
        while(j<=i){
            cout << str <<  " ";
            j = j+1;
            str = str + 1;
        }
        str2 = str2 + 1;
        cout<<endl;
        i = i+1;
    }
}