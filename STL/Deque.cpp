#include<iostream>
#include<deque>

using namespace std;
int main(){

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<< i << " ";
    }cout<< endl;

    /* d.pop_front();
    for(int i:d){
        cout<< i << " ";
    }
    */

    cout<< "Element at 1st index " << d.at(1)<<endl;

    cout<< "Front " << d.front()<<endl;
    cout<< "Back " << d.back()<<endl;

    cout<< "before erase "<< d.size() <<endl;
    d.erase(d.begin(),d.begin()+1); // have to mention the element or the range.
    cout<< "after erase "<< d.size() <<endl;
}