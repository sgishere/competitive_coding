#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
const int mod = 1e9 + 7;
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

//const int M=1e9+7;
//int binary_exp(int a,int b){
//if(b==0)return 1;
//long long res=binary_exp(a,b/2);
//if(b&1){
//	return (a*((res*res)%M))%M;
//}else{
//return (res*res)%M;
//}}


void SieveOfEratosthenes(int n)
{
bool prime[n + 1];
memset(prime, true, sizeof(prime));
for (int p = 2; p * p <= n; p++) {
    if (prime[p] == true) {
        for (int i = p * p; i <= n; i += p)
        prime[i] = false;
    }
}}

int gcd(int a, int b)
{return b == 0 ? a : gcd(b, a % b);}

bool isPrime(int N){ for(int i=2;i*i<=N;++i){if(N%i==0) return false;}return true;}

// void google(int i) {cout<<'Case #'<<i<<': ';}

void bin(unsigned n)
{
if (n > 1)
bin(n >> 1);
cout<<(n&1);
}
const int N =  1e6+10;
vector<vector<int> >v(N);
bool vis[N] = {0};
vector<int>val(N);
void dfs(int noida,int valkarie){
    vis[noida] = 1;
    int start = valkarie;
    if(noida==1){
        start = valkarie - 1;
    }
    else{
        start =  valkarie - 2;
        
    }
    for(auto it:v[noida]){
            if(vis[it]==0){
                val[it] = start;
                dfs(it,valkarie);
                start--;
            }
        }
    return;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int fac[10];
    fac[0] = 1;
    for(int i=1;i<10;i++){
        fac[i] = fac[i-1]*i;
    }
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1;i<10;i++){
        fac[i] = fac[i-1]*i;
    }
    // vector<int>val(n+1,0);
    for(int i=0;i<=n;i++){
        val[i] = 1;
    }
    val[1] = k;
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            dfs(i,k);
        }
    }
    for(int i=1;i<10;i++){
        fac[i] = fac[i-1]*i;
    }
    ll ptani = 1;
    lop(1,n+1){
        // cout<<val[i]<<endl;
        ptani *=val[i];
        ptani%=mod;
    }
    cout<<ptani<<endl;

return 0;

}