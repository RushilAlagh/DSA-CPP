#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int, string> m;

    m[1] = "Rushil";
    m[13] = "Dhruv";
    m[2] = "Sai";
    
    m.insert({5, "Vansh"}); // when we print this 5 would come between 2 and 13.

    for(auto i:m){
        cout<< i.first << " "<< i.second<< endl; // Even though m[13] was inserted first still it prints in an ordered way but in case of an unordered map the sequence is random.
        // first prints the key and second prints the value.
    }
    
    cout<< "Is 13 present " << m.count(13)<<endl;

    m.erase(13);
    cout<< "After erase "<<endl;
    for(auto i:m){
        cout<< i.first<< " "<< i.second << endl;
    }
    // time complexity of ordered map is log(n) as it implemented using red-black tree or a balanced tree while an unordered map is implemented using a hash table so its time complexity is log(1).

    auto it = m.find(2);
    for(auto i=it; i!=m.end(); i++){
        cout<< (*i).first<<endl;
    }
}