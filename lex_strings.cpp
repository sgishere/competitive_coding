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

    int T;cin>>T;
    while(T--){
        int N,M,K;
        cin>>N>>M>>K;
        string x;
        string y;
        string ans;
        cin>>x>>y;
        sort(all(x));
        sort(all(y));
        int m=x.size();
        int n=y.size();
        int c=0;
        int d=0;
        int kod=0,lod=0;
        while(m!=0 and n!=0){
            if(x[c]<y[d] and kod!=K){
                ans.pb(x[c]);
                c++;m--;kod++;
                lod=0;
            }
            else if(x[c]>y[d] and lod!=K){
                ans.pb(y[d]);
                d++;n--;lod++;
                kod=0;
            }
            else if(lod==K){
                 ans.pb(x[c]);
                c++;m--;kod++;
                lod=0;
            }
            else if(kod==K){
                ans.pb(y[d]);
                d++;n--;lod++;
                kod=0;
            }
        }
        cout<<ans<<endl;
        // cout<<x<<" "<<y<<endl;
    }
return 0;

}