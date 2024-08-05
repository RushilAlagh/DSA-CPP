#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    //cout << "checking for mid "<< mid <<endl;
    
    for(int i = 0; i<n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount > m || arr[i] > mid ) {
            return false;
        }
            pageSum = arr[i];
        }
        if(studentCount > m) {
            return false;
        }
        //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    int s = 0;
    int sum = 0;
    
    for(int i = 0; i<n; i++) {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid)) {
            //cout<<" Mid returned TRUE" << endl;
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}



/*

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<< "Enter size of array ";
    cin>> n;
    int arr[10];

    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }

    int m;
    cout<< "Enter number of students ";
    cin>> m;
    int a = 0;
    int i = 0;
    int b = 1;
    int c = 0;
    while(m!=0){
        a = a + n/m;
        for(i = c; i<a-1; i++){
            cout<< "Student " << b << " gets pages "<< arr[i]<< " " <<arr[i+1] << endl; 
        }
        m = m - 1;
        n = n - a;
        i = i + 1;
        b = b + 1;
        c = a;
    }
}
*/

// [10,20,30,40,50]  m = 3