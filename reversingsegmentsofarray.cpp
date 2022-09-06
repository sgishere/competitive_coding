//reversing segments of array 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,K;
        cin>>N>>K;
        vector<int>arr;
        arr.push_back(0);
        for(int i=1;i<=K;++i)
        {   int x;cin>>x;
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end());
        vector<int>v;
        for(int i=1;i<=K;++i)
        {
            for(int j=arr[i];j>arr[i-1];--j)
            v.push_back(j);
        }
        for(int i=0;i<v.size();++i)
        cout<<v[i];
        cout<<endl;
    }
    return 0;
}