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

    int k = 0;

    for(int i = 0; i<n; i++){
        for(int j = i + 1; j<n; j++){
            if(arr1[i]>arr1[j]){
                swap(arr1[i], arr1[j]);
            }
        }
        }
     for(int i = 0; i<n; i++){

        cout<< arr1[i];
    }

}
