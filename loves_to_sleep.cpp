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
        int n,H,M;
        cin>>n>>H>>M;
        int min1=H*60+M;
            vin ans;
        while(n--){
            int x,y;
            cin>>x>>y; //xhrs::ymins
            int min2=x*60+y;
            int yola=min2-min1;
            yola<0?ans.pb(yola+1440):ans.pb(yola);
        }
           int lambda=*min_element(all(ans));
            int a=lambda/60;
            int b=lambda-a*60;
            cout<<a<<" "<<b<<endl;
    }
return 0;

}