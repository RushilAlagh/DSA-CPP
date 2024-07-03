/*

A B C
B C D
C D E



#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            char str = 'A' + i + j -2;
            cout << str <<  " ";
            str = str + 1;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }
}
*/

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
        while(j<=n){
            cout << str <<  " ";
            j = j+1;
            str = str + 1;
        }
        str2 = str2 + 1;
        cout<<endl;
        i = i+1;
    }
}