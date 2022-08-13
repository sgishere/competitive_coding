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
        int N,K;
        cin>>N>>K;
        string S;
        cin>>S;
        int ct1=0,ct0=0;
        lop(N){
            if(S[i]=='1')ct1++;
            else ct0++;
        }
        int diff=abs(ct1-ct0);
        diff%K==0?cout<<diff/K<<endl:cout<<diff/K+1<<endl;
        
    }
return 0;

}