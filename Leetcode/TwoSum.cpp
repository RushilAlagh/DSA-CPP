#include<iostream>
using namespace std;

int main(){
   
    int num;
    cout<< "Enter number of elements of array ";
    cin>> num;
    int arr[10];

    for(int i = 0; i<num; i++){
        cin>> arr[i];
    }
     int n;
    cout<< "Enter number ";
    cin>> n;
    int sum = 0;
    int arr1[10];
    int b = 0;

    for(int i = 0; i<num; i++){
        for(int j = 0; j<num; j++){
            sum = arr[j] + arr[i];
            if(sum == n){
                arr1[b] = arr[i];
                arr1[b+1] = arr[j];
                for(int i = 0; i<2; i++){
                    cout<< arr1[i];
                }
                
            }
            break;
        }
    }
}