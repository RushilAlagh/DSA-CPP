#include<iostream>
using namespace std;

void SumOfArray(int arr[], int n){

    int sum = 0;
    for(int i = 0; i<n; i++){

        sum = sum + arr[i];
    }

    cout<< "Sum of array is "<<sum<<endl;
}

int main(){

    int arr[100];
    cout<<"Enter number of elements to be enterted ";
    int n;
    cin>> n;
    for(int i = 0; i<n; i++){

        cin>> arr[i];
    }

    SumOfArray(arr, n);

}