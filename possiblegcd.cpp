#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define ff first
#define ss second

#define lop(n) for (int i = 1; i <= n; i++)
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
    while(T--){
        ll abu,bbu;
        cin>>abu>>bbu;
        ll diff=abs(abu-bbu);
        // int lamba=1;
        vin v;
        lop(sqrt(diff)){
            if(diff%i==0){
                diff/i==i?v.pb(1):v.pb(2);
            }
        }
        ll ans=0;
        // cout<<s.size()<<endl;
        lopj(v.size()){
            ans+=v[j];
        }
        cout<<ans<<endl;
    }
return 0;

}