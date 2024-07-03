/*
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
*/

#include<iostream>
using namespace std;

void FindUnique(int arr[], int n){

    int count = 0;
    int a = 0; 
    int brr[100];
    for(int i = 0; i<n; i++){
        count = 0;
        for(int j=0; j<n; j++){
            
            if(arr[i] == arr[j]){
                count = count + 1;
            }
        }
        for(int i = 0; i<n; i++){

        cin>> brr[count];
    };
       // a = a + 1;
        }

        for(int i = 0; i<10; i++){

            cout<< brr[i]<< " ";
        }
    }

int main(){

     int n;
    cout<< "Enter size of array ";
    cin>> n;
    int arr[100];
    for(int i = 0; i<n; i++){

        cin>> arr[i];
    }

    FindUnique(arr, n);
}