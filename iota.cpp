#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n;cin>>n;
    // vector<int>v(n);
    // iota(v.begin(),v.end(),10);
    // for(int i=0;i<v.size();i++)
    // cout<<v[i]<< " ";
    int arr[n];
    iota(arr,arr+n,1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}   