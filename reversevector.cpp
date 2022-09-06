#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n;cin>>n;
    // vector<int>v(n);
    // iota(v.begin(),v.end(),0);
    // reverse(v.begin()+3,v.begin()+6);
    // for(int i=0;i<v.size();i++)
    // cout<<v[i];
    int arr[n];
    iota(arr,arr+n,0);
    reverse(arr+3,arr+6);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
return 0;
}