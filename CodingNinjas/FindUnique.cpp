#include<iostream>
using namespace std;

void FindUnique(int arr[], int n){
   int count = 0;
   int a = 1; 
    for(int i = 0; i<n; i++){
        count = 0;
        for(int j=0; j<n; j++){
            
            if(arr[i] == arr[j]){
                count = count + 1;
            }
        }
        if (count<2){
            cout<< "Unique element is "<< arr[i]<<" "<< endl;
            a = a + 1;
        }
    }

    if(a == 1){
        cout<< "No unique element found";
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


/*
int findUnique(int *arr, int size)
{
   	int ans = 0;
    
    for(int i = 0; i<size; i++) {
        ans = ans^arr[i];
    }
    return ans;
}

*/