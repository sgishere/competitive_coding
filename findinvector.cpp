#include <bits/stdc++.h>
using namespace std; 

int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(5);
    v.push_back(1);
    v.push_back(8);
    v.push_back(3);
    if(find(v.begin(),v.end(),5)!=v.end())  //if 5 is found is vector
    cout<<"Hello";

return 0;
}