//unordered_map has less time complexity than ordered map (normal map)
// when ordering doesn;t matter it's better to use unordered map
//in unordered_map u cannot use pairs,vectors as data type


// Given N strings and Q queries
// In each query you are given a string 
// print frequency of that string
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std; 

int main(){
    int N;
    cin>>N;
    unordered_map<string,int>m;
    for(int i=0;i<N;i++)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    int Q;
    cin>>Q;
    while(Q--)
    {
        string str;
        cin>>str;
        cout<<m[str]<<endl;
    }
return 0;
}