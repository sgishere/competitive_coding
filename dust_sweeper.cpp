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

    int T;
    cin>>T;
    while(T--){
        ll N;
        cin>>N;
        ll arr[N];
        lop(0,N)cin>>arr[i];
        ll ans=0;
        ll k=0;
        while(arr[k]==0)k++;
        lop(k,N-1){
            if(arr[i]!=0)ans+=arr[i];
            else ans++;
        }
        cout<<ans<<endl;
    }
return 0;

}