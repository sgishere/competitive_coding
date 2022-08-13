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
        int N;
        cin>>N;
        int ans=1;
        while(ans<N){
            ans=ans*10;
        }
        ans=ans/10;
        if(N==1 or N==1e1 or N==1e2 or N==1e3 or N==1e4 or N==1e5 or N==1e6 or N==1e7 or N==1e8 or N==1e9 or N==1e10)cout<<0<<endl;
        else
        cout<<N-ans<<endl;
    }
return 0;

}