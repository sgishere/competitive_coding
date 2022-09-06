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
        string S;
        cin>>S;
        map<char,int>m;
        lop(S.size()){
            if(S[i]=='T')m[S[i]]++;
            else if(S[i]=='i')m[S[i]]++;
            else if(S[i]=='m')m[S[i]]++;
            else if(S[i]=='u')m[S[i]]++;
            else if(S[i]=='r')m[S[i]]++;
        }
        if(m.size()==5 and N==5){
            int ct=0;
            for(auto it:m){
                if(it.second==1)
                ct++;
            }
            if(ct==5)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
return 0;

}