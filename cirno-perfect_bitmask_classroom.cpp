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

ll binary_exp(int a,int b)
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
        ll N;
        cin>>N;
        if(N==1)cout<<3<<endl;
        else{
        if(N&1)cout<<1<<endl;
        else{
        ll x=N;int ct=0;
        ll yola=log2(N);
        if(binary_exp(2,yola)==N)cout<<N+1<<endl;
        else{
            ll ind=0;int ansf;
        for(ll i=30;i>=1;i--){
            ind=(x>>i)&1;
            if(ind==1)ansf=i;
        }
        cout<<binary_exp(2,ansf)<<endl;
        }
        }
        }
    }
return 0;

}
// #include <bits/stdc++.h>

// #define ll long long
// #define pb push_back
// #define ff first
// #define ss second

// #define lop(n) for (int i = 0; i < n; i++)
// #define lopj(n) for (int j = 0; j < n; j++)

// #define all(x) x.begin(), x.end()
// #define sortd(x) sort(x.rbegin(), x.rend())
// #define bitcount(x) __builtin_popcount(x)

// #define vin vector <int>
// #define vll vector <ll>
// #define pll pair <ll, ll>
// #define pii pair <int, int>
// #define vpll vector <pll>

// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0); 
//     cin.tie(0);
//     int T;cin>>T;
//     while(T--){
//     int x;
//     cin>>x;
//     x==1? cout<<3<<endl : int(x&-x)==x? cout<<int(x&-x)+1<<endl : cout<<int(x&-x)<<endl;
//     }
// return 0;

// }