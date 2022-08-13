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
        ll N;
        cin>>N;
        vin arr(N);
        lop(N)cin>>arr[i];
        sort(all(arr),greater<int>());
        // arr[]=9,6,5,2
        ll prefix[N];
        prefix[0]=arr[0];
        for(ll i=1;i<=N;i++)
            prefix[i]=prefix[i-1]+arr[i];
        //prefix[]=9,15,20,22
        ll suffix[N];
        suffix[N-1]=arr[N-1];
        for(ll i=N-2;i>=0;i--)
            suffix[i]=arr[i]+suffix[i+1];
        //suffix[]=22,13,7,2
        if(arr[0]==arr[N-1])cout<<0<<endl;
        else{
        lop(N){
            if(arr[i]>=(arr[i+1]*(N-i-1)-suffix[i+1])){cout<<i+1<<endl;break;}
        }}
    }
return 0;

}