#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter number ";
    cin>> n;

    int start = 0;
    int end = n;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(mid*mid == n){
            cout<< "Square root of number is "<< mid;
            break;
        }

        else if(mid*mid < n){
            start = mid + 1;
        }

        else if(mid*mid > n){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
     if(start>end){
            cout<< "Square root of number is "<< start - 1;
        }
}


/*
int main(){
    int n;
    cout<< "Enter number ";
    cin>> n;

    if(n == 0){
        cout<< "Square root of number is 0";
    }
    if(n == 1){
        cout<< "Square root of number is 1";
    }
    for(int i = 0; i<n; i++){
        int a = i*i;
            if(a == n){
                cout<< "Square root of number is "<< i;
                break;
            }
            else if(a>n){
                cout<< "Square root of number is "<< i-1;
                break;
            }
    }
}
*/


/*

#include<iostream>
using namespace std;

 long long int sqrtInteger(int n) {
        
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        
        long long int ans = -1;
        while(s<=e) {
            
            long long int square = mid*mid;
            
            if(square == n)
                return mid;
            
            if(square < n ){
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

double morePrecision(int n, int precision, int tempSol) {
    
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n;
    cout <<" Enter the number " << endl;
    cin >> n;

    int tempSol = sqrtInteger(n);
    cout <<" Answer is " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}

*/