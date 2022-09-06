// Given two arrays A and B contains integers of size N and M, the task is to find numbers which are present in the first array, but not present in the second array.
#include <bits/stdc++.h>
using namespace std; 

int main(){
    int N;
    int M;
    cin>>N;
    cin>>M;
    vector<int>arr;
    vector<int>brr;
    for(int i=0;i<N;i++)
    {int x;
    cin>>x;
    arr.push_back(x);
    }
    for(int i=0;i<M;i++)
    {
    int y;
    cin>>y;
    brr.push_back(y);
    }
    for(int i=0;i<N;i++)
    {
        if(find(brr.begin(),brr.end(),arr[i])==brr.end())
            cout<<arr[i]<<" ";
    }
return 0;
}
