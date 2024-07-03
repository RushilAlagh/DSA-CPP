#include<iostream>
using namespace std;

int main(){

    int arr[10] = {1, 3, 5, 22, 0, -2, 15, 35, 28, 19};
    int n;
    cin>>n;
    int a = 1;
    for(int i = 0; i<10; i++){

        if(n == arr[i]){
           cout<< n <<" is present in array";
            a+=1;
            break;
        }
    }

    if(a == 1){
        cout<< "Element not found";
    }
}