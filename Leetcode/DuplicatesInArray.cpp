#include<iostream>
using namespace std;

void FindDuplicate(int arr[], int n){

    int count = 0;
    for(int i = 0; i<n; i++){
        count = 0;
        for(int j = 0; j<n; j++){

            if(arr[i] == arr[j]){
                count = count + 1;
            }
        }
        // 
        if(count>1){
            while(1){


            }
        }
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

    FindDuplicate(arr, n);
}

/*
#include<vector>
using namespace std;
int findDuplicate(vector<int> &arr) 
{
    int ans = 0;
    
    //XOR ing all array elements
    for(int i = 0; i<arr.size(); i++ ) {
    	ans = ans^arr[i];
    }
	
    //XOR [1, n-1]
    for(int i = 1; i<arr.size();i++ ) {
    	ans = ans^i;
    }
    return ans;
}
*/