#include<iostream>
#include<array>

using namespace std;
int main(){

    int basic[3] = {1,2,3};
    
    array<int,4> a = {1,2,3,4};

    int size = a.size();

    for(int i = 0; i<size; i++){
        cout<< a[i]<<endl;
    }

    cout<< "Element at 2nd index " << a.at(2)<<endl;

    cout<< "Empty or not " << a.empty()<<endl; // Always returns false as std::array is never empty as it has a fixed size determined at compile time but a std::vector can be empty. 

    cout<< "First Element " << a.front()<<endl;
    cout<< "Last Element " << a.back()<<endl;
}