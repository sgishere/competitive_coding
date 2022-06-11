//SGCODEIIITA
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
        ll mny;
        cin>>mny;
        vin sweetscost;
        lop(N)
        {
            ll x;
            cin>>x;
            sweetscost.pb(x);
        }
        vin discount;
        lop(N)
        {
            ll x;
            cin>>x;
            discount.pb(x);
        }
        ll diff[N];
        lop(N)
        {
            diff[i]=sweetscost[i]-discount[i];
        }
        ll min=INT_MAX;
        ll index=-1;
        vector<pair<ll,pair<ll,ll>>>v;
        lop(N)
        {
            v.pb(make_pair(diff[i],make_pair(sweetscost[i],discount[i])));
        }
        sort(v.begin(),v.end());
        ll count=0;
        lop(N)
        {
            while(mny>=v[i].ss.ff){
                ll x=mny/(v[i].ss.ff);
                count+=x;
                mny-=x*(v[i].ss.ff);
                mny+=x*(v[i].ss.ss);
            }
            
        }
        cout<<count<<endl;
    }
return 0;
}