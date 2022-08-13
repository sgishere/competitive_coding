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
    while(T--){
        ll N,L,R;
        cin>>N>>L>>R;
        vll ans;
        ans.pb(L);
        ll x=L;
        for(int i=1;i<N;i++){
            // while(x%(i+1)!=0){
            //     x++;
            // }
            if(x%(i+1)==0)ans.pb(x);
            else
            ans.pb(x+(i+1-(x)%(i+1)));
        }
        int maxi=*max_element(all(ans));
        if(maxi>R)cout<<"NO"<<endl;
        else {cout<<"YES"<<endl;
        lop(N)cout<<ans[i]<<" ";
        cout<<endl;}
    }
return 0;

}