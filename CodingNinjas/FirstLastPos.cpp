// First and last position of element in a sorted array

/*

#include<vector>
using namespace std;
int firstOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    
    return p;
}


*/






/*

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

    int m;
    cout<< "Enter element whose first and last position is to be found ";
    cin>> m;
    int a = 0;

    for(int i = 0; i<n; i++){
        if(arr[i] == m){
            cout<< "Element's first position is at index "<< i << endl;
            a = a+1;
            break;
        }
    }

    if(a != 1){
        cout<< "Element not found";
    }

    else{for(int i = n-1; i>=0; i--){
         if(arr[i] == m){
            cout<< "Element's last position is at index "<< i << endl;
            break;
        }
    }}

}

*/

