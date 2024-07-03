#include<iostream>
using namespace std;

void SwapAlternate(int arr[], int n){

    int start = 0;
    int end =  1;
    for(int i = 0; i<n/2; i++){
        
        swap(arr[start],arr[end]);
        start = start + 2;
        end = end + 2;
    }

    for(int i = 0; i<n; i++){

        cout<< arr[i]<< " ";
    }
}

int main(){
    int n;
    cout<< "Enter size of array";
    cin>> n;
    int arr[100];
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }    
    SwapAlternate(arr, n);
}