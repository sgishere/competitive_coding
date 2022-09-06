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

void f(vector<int>&arr,vector<vector<int> >&ans,int curr_ind,int N,vector<int>&ds){
    ans.push_back(ds);
    for(int i=curr_ind;i<N;i++){
    if(i!=curr_ind and arr[i]==arr[i-1]) continue;
        ds.push_back(arr[i]);
        f(arr,ans,i+1,N,ds);
        ds.pop_back();
    }
}

vector<vector<int> > subsetsWithDup(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int> >ans;
        int N=nums.size();
        sort(nums.begin(),nums.end());
        f(nums,ans,0,N,ds);
        return ans;
    }

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    vector<int>arr;
    arr.pb(1);
    arr.pb(2);
    arr.pb(2);
    // arr.pb(2);
    // arr.pb(3);
    // arr.pb(3);
    vector<vector<int> >ans=subsetsWithDup(arr);
    for(auto it: ans){
        for( auto loda:it){
            cout<<loda<<" ";
        }
        cout<<endl;
    }
return 0;

}