#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> s;

    s.insert(1);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(0);
    s.insert(0);

    for(auto i:s){
        cout<< i << endl;
    }cout<< endl;

    // Even if we insert any element more than once still it prints only once.

    set<int>::iterator it = s.begin();
    it++; // 1 will be removed as value of iterator increments so 0 5 6 will be the output.

    s.erase(it);
    for(auto i : s){
        cout<< i << endl;
    }

    cout<< "5 is present or not "<<s.count(5)<<endl;

    set<int>::iterator itr = s.find(5);
    cout<< "5 present at itr "<< *it<<endl;

    for(auto it=itr; it!=s.end();it++){
        cout<<*it<<" ";
    }cout<< endl; // value of itr is 1 so when printing the elements it prints from index 1 and 0 is ignored.
    // time complexity of functions erase, count, find, insert is log(n) while functions like size, begin, end, empty have time complexity log(1).
}