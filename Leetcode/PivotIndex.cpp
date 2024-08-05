#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements of array: ";
    cin >> n;
    
    int arr[10];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int left_sum = 0;
    for (int i = 0; i < n; i++) {
        left_sum += arr[i];
        if (left_sum == sum) {
            cout << "Pivot element is at index " << i << endl;
            return 0; 
        }
        sum -= arr[i];
    }

    cout << "Pivot element not found" << endl;
    return -1;
}



/*

#include<iostream>
using namespace std;

int LeftSum(int arr[], int n, int mid){

    int start = 0;
    int end = n - 1;
    int sum = 0;
    for(int i = 0; i<mid; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int RightSum(int arr[], int n, int mid){

    int start = 0;
    int end = n - 1;
    int sum1 = 0;
    for(int i = n-1; i>mid; i--){
        sum1 = sum1 + arr[i];
    }
    return sum1;
}

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

    int a = LeftSum(arr, n, mid);
    int b = RightSum(arr, n, mid);
  
    while(a != b){
      
        if(a<b){
        mid = mid + 1;
        a = LeftSum(arr, n, mid);
        b = RightSum(arr, n, mid);
       }

       else if(a>b){
        mid = mid - 1;
        a = LeftSum(arr, n, mid);
        b = RightSum(arr, n, mid);
       }
        if(mid == arr[n-1]){
            mid = arr[0];
        }
         if(mid == arr[0]){
            mid = arr[n-1];
        }
       }

        if(a == b){
        cout<< "Pivot element is at index "<< mid<<endl;
    }

    else{
        cout<< "Pivot element not found";
    }
}

*/