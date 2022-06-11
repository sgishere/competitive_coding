//SG69CODE
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define l long
const int n=1e7+1;
ll int arr[n];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin>>N;
    int m;
    cin>>m;
    while(m--)
    {
        int a,b,k;
        cin>>a>>b>>k;
        arr[a]+=k;
        arr[b+1]-=k;
    }
    for(int i=1;i<=N;i++)
    {
        arr[i]+=arr[i-1];
    }
    ll max=LONG_LONG_MIN;
    for(int i=1;i<=N;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    cout<<max<<endl;
return 0;
}
