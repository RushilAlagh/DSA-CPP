/*

A 
B C
D E F
G H I J

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
        while(j<=i){
            cout << str <<  " ";
            j = j+1;
            str = str + 1;
        }
        
        cout<<endl;
        i = i+1;
    }
}