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
    while(T--){
        int sum;
        cin>>sum;
        int k=9;
        vin v;
        while(sum>0){
            if(sum<=k){v.pb(sum);break;}
            sum=sum-k;
           v.pb(k);
            k--;
        }
        reverse(v.begin(),v.end());
        lop(v.size())cout<<v[i];
        cout<<endl;
    }
return 0;

}