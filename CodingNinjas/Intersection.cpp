#include<iostream>
using namespace std;

int main(){

    int arr1[10];
    int n;
    cout<< "Enter number of elements of first array ";
    cin>> n;

    for(int i = 0; i<n; i++){

        cin>> arr1[i];
    }

    int arr2[10];
    int m;
    cout<< "Enter number of elements of second array ";
    cin>> m;

    for(int i = 0; i<m; i++){

        cin>> arr2[i];
    }

    int arr3[10];
    int i=0, j=0, k=0;
    while(i<n && j<m){

        if (arr1[i] == arr2[j]){
            arr3[k] = arr1[i];
            i++;
            j++;
            k++;
        }

        if(arr1[i] < arr2[j]){
            break;
        }

        if(arr1[i] > arr2[j]){
            j++;
        }
    }

    int y = sizeof(arr3)/sizeof(arr3[0]);
    for(int x=0; x<y; x++){
        cout<< arr3[x]<<endl;
    }

}