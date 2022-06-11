//sg69pro code
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
const int M=998244353;
int binary_exp(int a,int b)
{    if(b==0) return 1;
    ll res=binary_exp(a,b/2);
    if(b&1) 
    return (a*(res*res)%M)%M;
    else 
    return (res*res)%M;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        string S;
        cin>>S;
        vector<string>v;
        for(int i=0;i<N;i++)
        {    string x="";
            x.push_back(S[i]);
           v.pb(x);
            for(int j=i+1;j<N;j++)
            {
                x.push_back(S[j]);
                v.pb(x);
            }
        }
        // for(int i=0;i<v.size();i++)
        // v[i]=v[i]
        vll vi(v.size());
        lop(v.size())
        {  ll x=0;
            ll z=1;
            for(int j=v[i].size()-1;j>=0;j--)
            {   if(v[i][j]=='1')
                {x+=1*z;
                z=z*2;}
                else
                z=z*2;
            }
            vi[i]=x;
        }
        int z=0;
        lop(vi.size())
        {
            z^=vi[i]%M;
        }
        cout<<z<<endl;
        
    }
    
return 0;

}