#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define ff first
#define ss second

#define lop(a,n) for (int i = a; i < n; i++)
#define lopj(a,n) for (int j = a; j < n; j++)

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
        int N,M;
        cin>>N>>M;
        int arr[N+1];
        arr[0]=0;
        lop(1,N+1){
            cin>>arr[i];
        }
        vpll pairs;
        const int y=1e5+7;
        int freq[y]={0};
        lop(0,M){
            int x,y;
            cin>>x>>y;
            pairs.pb(make_pair(x,y));
            freq[x]++;
            freq[y]++;
        }
        if(!(M&1))cout<<0<<endl;
        else{
            int ans=INT_MAX;
            lop(1,N+1)
            {
                if(freq[i]&1)
                ans=min(ans,arr[i]);
            }
            for(auto x: pairs){
                if(!(freq[x.first]&1) and !(freq[x.second]&1))
                ans=min(ans,arr[x.first]+arr[x.second]);
            }
            cout<<ans<<endl;
        }

    }
    
return 0;

}