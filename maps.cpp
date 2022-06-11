#include <bits/stdc++.h>
using namespace std; 

int main(){
    map<int,string>m;
    m[1]="sagar";
    m[5]="rhythm";
    m[3]="jamdu";
    // m.insert({4,"jamduii"});
    m[4]="jamdui";
    for(auto i:m) //range_based_loop
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto it=m.find(5);  //it returns a itrator pointing towards key 5
    if(it==m.end())
    cout<<"Not in m map\n";
    else{
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    m.erase(5);
return 0;
}