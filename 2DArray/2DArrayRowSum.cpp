#include<iostream>
using namespace std;

int main(){
    int arr[3][3];

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cin>> arr[i][j];
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<< arr[i][j] << " ";
        }
        cout<< endl;
    }
    int sum = 0;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            sum = sum + arr[i][j];
        }
        cout<< "Sum of row "<< i <<" is "<< sum <<" "; 
        cout<< endl;
        sum = 0;
    }
}