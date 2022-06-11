// Given N strings,print unique strings in lexicographical
// order with their frequency
// N<=1e5
// |S|<=100
#include <bits/stdc++.h>
using namespace std; 
void print_map(map<string,int>&m)
{
    for(auto it:m)
    {cout<<it.first<<" "<<it.second;
    cout<<endl;
    }
}
int main(){
    int N;
    cin>>N;
    map<string,int>m;
    for(int i=0;i<N;i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    print_map(m);
return 0;
}