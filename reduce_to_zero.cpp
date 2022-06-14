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


int binary_exp(int a,int b)
{    if(b==0) return 1;
    ll res=binary_exp(a,b/2);
    if(b&1) 
    return (a*(res*res));
    else 
    return (res*res);
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    ll T;
    cin>>T;
    while(T--){
        ll X,Y;
        cin>>X>>Y;
        if(X==0 or Y==0){
            cout<<-1<<endl;
        }
        else{
        ll mini=min(X,Y);
        ll maxi=max(X,Y);
        ll ans=0;
        while(mini<maxi){
            mini=mini*2;
            ans++;
        }
        // mini>maxi?mini=mini/2,ans--:
        if(mini>maxi){
            mini=mini/2;ans--;
        }
        ans+=maxi;
        // mini==maxi?ans+=maxi:ans+=maxi+1;
        cout<<ans<<endl;
        }
    }
return 0;

}