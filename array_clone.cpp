#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define ff first
#define ss second

#define lop(n) for (int i = 0; i < n; i++)
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
ll ans(ll N){
    if(N&1)return N-1+(N+1)/2;
    else return N-1+(N)/2;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int T;cin>>T;
    while(T--){
        ll N;
        cin>>N;
        ll arr[N];
        map<ll,ll>m;
        lop(N){cin>>arr[i];m[arr[i]]++;}
        ll maxi=m[arr[0]];
        for(auto it:m){
            if(it.second>maxi){
                maxi=it.second;
            }
        }
        int ct=0;
        int copy=1;
        int swap=0;
        int i=0;
        int k=maxi;
        while(swap!=N-k){
            if(i==maxi)
            {copy++;i=0;maxi=maxi*2;}
            else
            {swap++;
            i++;}
        }
        if(N==1)cout<<0<<endl;
        else if(maxi==N)cout<<0<<endl;
       else cout<<swap+copy<<endl;}
    
return 0;

}