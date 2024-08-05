#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> movezeroes(vector<int> v, int n){
    
      int nonZero = 0;
        for(int j = 0; j<n; j++){
            if(v[j] != 0){
                swap(v[j], v[nonZero]);
                nonZero++;
            }
}
return v;
}

void print(vector<int> ans, int n){
        for(int i = 0; i<n; i++){
            cout<< ans[i] << " "; 
        }cout<< endl;
}

int main(){
    
    vector<int> v = {0,1,0,3,12}; // [1,3,12,0,0]

    vector<int> ans = movezeroes(v, 5);

    cout<< "Array after moving zeroes "<< endl;
    print(ans, 5);

    return 0;
}