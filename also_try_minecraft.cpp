#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define ff first
#define ss second

#define lop(a,n) for (int i = a; i < n; i++)
#define lopj(n) for (int j = 0; j < n; j++)

#define all(x) x.begin(), x.end()
#define sortd(x) sort(x.rbegin(), x.rend())
#define bitcount(x) __builtin_popcount(x)

#define vin vector <int>
#define vll vector <ll>
#define pll pair <ll, ll>
#define pii pair <int, int>
#define vpll vector <pll>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    ll N,M;
    cin>>N>>M;
    ll x=N+1;
    ll arr[x];
    lop(1,N+1)cin>>arr[i];
    ll prefix[N];
    prefix[0]=0;
    prefix[1]=0;
    for(ll i=2;i<x;i++){
        if(arr[i]<arr[i-1]){
            prefix[i]=prefix[i-1]+arr[i-1]-arr[i];
        }
        else{
            prefix[i]=prefix[i-1];
        }
    }
    ll suffix[x];
    if(arr[N]<arr[N-1])suffix[N]=0;
    else suffix[N]=arr[N]-arr[N-1];
    for(ll i=N-1;i>0;i--){
        if(arr[i]>arr[i-1])suffix[i]=suffix[i+1]+arr[i]-arr[i-1];
        else suffix[i]=suffix[i+1];
    }
    while(M--){
        ll X,Y;
        cin>>X>>Y;
        ll m=X,n=Y;
        if(Y>X)
            cout<<prefix[Y]-prefix[X]<<endl;
        else 
            if(X==N)cout<<suffix[Y+1]<<endl;
            else
           cout<<suffix[Y+1]-suffix[X+1]<<endl;  
    }
return 0;

}