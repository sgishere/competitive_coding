#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define ff first
#define ss second

#define lop(a,n) for (int i = a; i < n; i++)
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
        int X;
        cin>>X;
        int arr[2*N];
        lop(0,2*N)cin>>arr[i];
        sort(arr,arr+(2*N));
        vin v1;
        vin v2;
        lop(0,N){
            v1.pb(arr[i]);
        }
        lop(N,2*N){
            v2.pb(arr[i]);
        }
        int ct=0;
        lop(0,N){
           if(v2[i]-v1[i]>=X)ct++;
        }
        // cout<<endl;
        if(ct==N)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;

}