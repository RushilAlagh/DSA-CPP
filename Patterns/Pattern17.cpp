/*

D
C D
B C D
A B C D

*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;
    char str = 'D';
    char str2 = 'D';
    
    while(i<=n){
        str = str2;
        int j = 1;
        while(j<=i){
            cout << str <<  " ";
            j = j+1;
            str = str + 1;
        }
        str2 = str2 - 1;    
        cout<<endl;
        i = i+1;
    }
}