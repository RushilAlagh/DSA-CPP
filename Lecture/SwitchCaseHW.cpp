#include<iostream>
using namespace std;

int main(){

    int n;
    cin>> n;
    int a,b,c,d;
    switch (1)
    {
    case 1:
    
    a = n/100;
    n = n%100;
    cout<< "Number of 100 rs notes are "<<a<<endl;
    
    

    case 2:
    
    b = n/50;
    n = n%50;
    cout<< "Number of 50 rs notes are "<<b<<endl;
    
    
    case 3:
    
    c = n/20;
    n = n%20;
    cout<< "Number of 20 rs notes are "<<c<<endl;
    

    case 4:
    
    d= n/1;
    n = n%1;
    cout<< "Number of 1 rs notes are "<<d<<endl;
    

    default:
        break;
    }
}