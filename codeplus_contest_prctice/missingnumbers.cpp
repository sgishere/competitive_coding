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

    int T;
    cin>>T;
    while(T--)
    {
        vin v(4);
        lop(4)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll a=(v[2]+v[0])/2;
        ll b=v[2]-a;
        ll c=(v[2]+v[1])/2;
        ll d=v[2]-c;
        ll e=(v[3]+v[0])/2;
        ll f=v[3]-e;
        ll g=(v[3]+v[1])/2;
        ll h=v[3]-g;
        if((a%1==0) and (a!=0) and (b%1==0) and (b!=0))
        {
            if((a/b==v[1]) and (a*b)==v[3] and (a>=1) and (b>=1) and (a<=10000) and (b<=10000))
            {
                cout<<a<<" "<<b<<endl;
                continue;
            }
        }
        if((c%1==0) and (c!=0) and (d%1==0) and (d!=0))
        {
            if((c/d==v[0]) and (c*d==v[3]) and (c>=1) and (d>=1) and (c<=10000) and (d<=10000))
                {
                    cout<<c<<" "<<endl;
                    continue;
                }
        }
        if((e%1==0) and (e!=0) and (f%1==0) and (f!=0))
        {
            if((e/f==v[1]) and (e*f==v[2]) and (e>=1) and (f>=1) and (e<=10000) and (f<=10000))
            {
                cout<<e<<" "<<endl;
                continue;
            }
        }
        if((g%1==0) and (g!=0) and (h%1==0) and (h!=0))
        {
            if((g/h==v[0]) and (g*h==v[2]) and (g>=1) and (h>=1) and (g<=10000) and (h<=10000))
            {
                cout<<g<<" "<<endl;
                continue;
            }
        }
        cout<<"-1 -1"<<endl;
    }

return 0;

}