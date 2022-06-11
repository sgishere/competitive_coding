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

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    ll T;
    cin>>T;
    while(T--)
    {
        ll N;
        cin>>N;
        ll X;
        cin>>X;
        ll arr[N];
        lop(N)cin>>arr[i];
        sort(arr,arr+N,greater<int>());
        ll sum=N+2*arr[0];
        for(ll i=1;i<=N-2;i++)
        {
            sum+=arr[i];
        }
        if(sum<=X)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;

}