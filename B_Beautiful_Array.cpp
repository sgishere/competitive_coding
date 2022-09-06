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
    ll T;
    cin>>T;
    while(T--){
        ll N,K,B,S;
        cin>>N>>K>>B>>S;
        if( S/K<B)cout<<-1<<endl;
        else{
            vll v(N,0);
            if(S/K==B){
                v[N-1]=S;
                lop(v.size()){
                    cout<<v[i]<<" ";
                }
                cout<<endl;
            }
           else{
            v[0]=B*K+K-1;
            S=S-(B*K+K-1);
            int i=1;
            while(S>0 and i<N){
                if(S>=K-1){
                    v[i]=K-1;
                    S=S-K+1;
                }
                else{
                    v[i]=S;
                    S=0;
                }
                i++;
            }
          
            if(S>0){
                cout<<-1<<endl;
            }
            else{
                 lop(v.size()){
                    cout<<v[i]<<" ";
                }
                cout<<endl;
            }
           }
        }

    }
    
return 0;

}