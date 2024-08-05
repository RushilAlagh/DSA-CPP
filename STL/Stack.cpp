#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<string> s;

    s.push("Rushil");
    s.push("Sai");
    s.push("Dhruv");

    cout<< "Top Element "<< s.top()<<endl;

    s.pop();

    cout<< "Top element after pop "<< s.top()<<endl;

    cout<< "Size of stack "<< s.size(); // Earlier the size was 3 but after popping it becomes 2.
}