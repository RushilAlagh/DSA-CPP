#include<iostream>
#include<vector>

using namespace std;
int main(){
    
    vector<int> v;
    cout<< "Capacity " << v.capacity()<<endl;

    v.push_back(1);
    cout<< "Capacity " << v.capacity()<<endl;

    v.push_back(2);
    cout<< "Capacity " << v.capacity()<<endl;

    v.push_back(3);
    cout<< "Capacity " << v.capacity()<<endl;
    cout<< "Size " << v.size() << endl;

    cout<< "Element at 2nd index " << v.at(2)<<endl;

    cout<< "First Element " << v.front()<<endl;
    cout<< "Last Element " << v.back()<<endl;

    cout<< "before pop "<<endl;
    for(int i:v){
        cout<< i << " ";
    }cout<< endl;

    v.pop_back();

    cout<< "after pop "<< endl;
    for(int i:v){
        cout<< i <<" ";
    }cout<< endl;

    cout<< "before clear "<< v.size()<<endl;
    v.clear(); // clear() makes the size 0 but the capacity remains the same.
    cout<< "after clear "<< v.size()<<endl;

    vector<int> a(5,1); // if size of vector is known then we can use this to initialize the vector (5,1), the 5 denotes the size and every element is initialized by 1.
    cout<< "print a "<< endl;
    for(int i:a){
        cout<< i << " ";
    }cout<<endl;

    vector<int> last(a); // copying one vector into another.
    cout<< "print last "<< endl;
    for(int i:last){
        cout<< i << " ";
    }

}