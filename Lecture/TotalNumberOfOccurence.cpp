#include<iostream>
using namespace std;

int FirstOcc(int arr[], int n, int key){

    int start = 0;
    int end = n - 1;
    int mid = start + (end-start)/2;
    int ans;

    while(start<=end){

        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }

        else if(arr[mid]>key){
            end = mid - 1;
        }

        else if(arr[mid]<key){
            start = mid + 1;
        }

        mid = start + (end-start)/2;
        }
        return ans;
    }

int LastOcc(int arr[], int n, int key){

    int start = 0;
    int end = n - 1;
    int mid = start + (end-start)/2;
    int ans;

    while(start<=end){

        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }

        else if(arr[mid]>key){
            end = mid - 1;
        }

        else if(arr[mid]<key){
            start = mid + 1;
        }

        mid = start + (end-start)/2;
        }
        return ans;
    }


int main(){

    int n;
    cout<< "Enter number of elements of array ";
    cin>> n;
    int arr[10];

    for(int i = 0; i<n; i++){

        cin>> arr[i];
    }

    int a;
    cout<< "Enter element to be checked ";
    cin>> a;

   int b = FirstOcc(arr, 7, a);
   int c = LastOcc(arr, 7, a);
   cout<< c-b+1;
}
