#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
const int n=1e6;
int const z=1e9+7;
ll freq[n];
ll fact[n];
int binexp(int a ,int b,int m)
{
    int result=1;
    while(b>0)
    {
        if(b&1){
            result=(result*1LL*a)%m;
        }
        a=(a*1LL*a)%m;
        b>>=1;
    }
    return result;
}
int main(){
    fact[0]=1;
    fact[1]=1;
    for(ll j=2;j<n;j++)
    fact[j]=(fact[j-1]*j)%z;
    
    ll N;
    cin>>N;
    ll arr[N+1];
    for(ll i=1;i<N+1;i++)
    {
        cin>>arr[i];
        freq[arr[i]]++;
    }
    ll denominator=1;
    for(ll j=1;j<N+1;j++)
    {   
        denominator=(denominator*fact[freq[j]])%z;
    }
    ll ans=fact[N];
    ans=ans*binexp(denominator,z-2,z);
    cout<<ans%z<<endl;
return 0;
}