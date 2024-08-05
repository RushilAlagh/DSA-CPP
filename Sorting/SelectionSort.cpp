#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< "Enter number of elements ";
    cin>> n;
    int arr[10];
     
    for(int i = 0; i<n; i++){
        cin>> arr[i]; 
    }
    
    int temp;

    for(int i = 0; i<n-1; i++){
        int min = arr[i];
        for(int j = i + 1; j<n; j++){
            if(arr[j]<min){
                min = arr[j];
            }
            if(min!=arr[i]){
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
        }
        
        
    }

    for(int i = 0; i<n; i++){
        cout<< arr[i]<< " ";
    } 
}

/*

#include<vector>
using namespace std;
void selectionSort(vector<int>& arr, int n)
{   
    for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        
        for(int j = i+1; j<n; j++) {
            
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
            
        }
        swap(arr[minIndex], arr[i]);
    }
}

*/