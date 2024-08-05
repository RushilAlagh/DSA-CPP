#include<iostream>
using namespace std;

int main(){

    int arr1[10];
    int n;
    cout<< "Enter number of elements of array ";
    cin>> n;
   

    for(int i = 0; i<n; i++){

        cin>> arr1[i];
    }

    int a;
    cout<< "Enter element for which pair sums are to be found ";
    cin>> a;
    for(int i = 0; i<(n/2) - 1; i++){

        for(int j = 0; j<n; j++){
            if(arr1[i] + arr1[j] == a){
                cout<< arr1[i] <<" "<< arr1[j]<<endl;
            }
        }
    }
}