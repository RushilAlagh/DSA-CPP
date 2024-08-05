#include<iostream>
#include<vector>

using namespace std;

    void rotate(vector<int>& nums, int k) {
      
      int n = nums.size();
      vector<int> temp(n);
      
      
      for(int i =0;i<n;i++) {
        
        temp[(i+k)%n] = nums[i];
        
      }
      
      
      for(int i=0;i<nums.size();i++) 
      {
        nums[i] = temp[i];
      }
      
    };

    void print(vector<int> nums, int k){
        for(int i = 0; i<nums.size(); i++){
            cout<< nums[i]<< " ";
        }
    }

int main(){

    vector<int> v = {1,2,3,4,5};
    int k;
    cout<< "Enter the number of indexes upto which you want the array to be rotated ";
    cin >> k;

    rotate(v, k);
    print(v, k);
}