#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< "Enter number of elements of array ";
    cin>> n;
    int arr[10];

    for(int i = 0; i<n; i++){

        cin>> arr[i];
    }

    int start = 0;
    int end = n - 1;
    int mid = start + (end-start)/2;
    while(start<=end){
        
        if(arr[mid]<arr[mid+1]){
            start = mid + 1;
        }

        else if(arr[mid]<arr[mid-1]){
            end = mid - 1;
        }

         else if(arr[mid]>arr[mid+1]){
            cout<< "Peak element is at index "<< mid;
            break;
        }
        mid = start + (end-start)/2;
    }

    
}