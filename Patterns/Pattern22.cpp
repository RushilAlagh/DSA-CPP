/*

1   2   3   4   5   5   4   3   2   1
1   2   3   4   *   *   4   3   2   1
1   2   3   *   *   *   *   3   2   1
1   2   *   *   *   *   *   *   2   1
1   *   *   *   *   *   *   *   *   1


*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int i = 1;
    int k = n;
    int l = n;
    int y = n;

    while(i<=n){

       int j = 1;
       while(j<=k){
        cout<<j<<" ";
        j = j + 1;
       }
        k = k - 1;


        int o = i;
        int m = i - 1;
        while(m){
            cout<< "*"<<" ";
            m = m - 1;
        }

        int n = o - 1;
        while(n){
            cout<<"*"<<" ";
            n = n - 1;
        }

        l = y;
        
        while(l>0){
            cout<<l<<" ";
            l = l - 1;
        }
        y = y - 1;

        cout<<endl;
        i = i+1;
    }
}