#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string> q;

    q.push("Rushil");
    q.push("Sai");
    q.push("Dhruv");

    cout<< "Top Element "<< q.front()<<endl;

    q.pop();

    cout<< "Top element after pop "<< q.front()<<endl; 

    cout<< "Size of stack "<< q.size(); // Earlier the size was 3 but after popping it becomes 2.
}