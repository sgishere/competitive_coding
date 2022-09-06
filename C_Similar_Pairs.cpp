#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>

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


int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int arr[N];
        int ev=0,odd=0;
        lop(N){
            cin>>arr[i];
            if(arr[i]&1)odd++;
            else ev++;
        }
        sort(arr,arr+N);
        if(!(ev&1) and !(odd&1)){
            cout<<"YES"<<endl;
        }
        else{
            int ct=0;
            for(int i=1;i<N;i++){
                if(arr[i]-arr[i-1]==1){ct++;break;}
            }
            if(ct&1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
    }
return 0;

}