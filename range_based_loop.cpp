#include <bits/stdc++.h>
using namespace std; 

int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(69);
    //vector<int> ::iterator value=v.begin();
    //above line will make iterator value pointing to v.begin()
    for(auto &value:v)
    cout<<value<<" ";
    cout<<endl;
    auto a=4;
    cout<<a<<endl;
    // auto automatically determines type
    //used mainly for iterators data type
    
return 0;
}