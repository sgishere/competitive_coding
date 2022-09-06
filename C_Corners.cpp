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

#define vstring vector <string>
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
       vstring arr;
        int one=0;
        int zero=0;
        lop(N){
            string s;
            cin>>s;
            arr.pb(s);
            lopj(M)
            {
            if(arr[i][j]=='1')one++;
            else zero++;
            }
        }
        bool flag=false;
        if(!flag){
        lop(N){
            lopj(M-1){
                if(arr[i][j]=='0' and arr[i][j+1]=='0')
                {flag=true;break;}
            }
        }}
        if(!flag){
        lop(N-1){
            lopj(M){
                if(arr[i][j]=='0' and arr[i+1][j]=='0')
                {flag=true;break;}
            }
        }}
        if(!flag){
        lop(N-1){
            lopj(M-1){
                if(arr[i][j]=='0' and arr[i+1][j+1]=='0')
                {flag=true;break;}
            }
        }}
        if(!flag){
        lop(N-1){
            lopj(M){
                if(arr[i][j]=='0' and arr[i+1][j-1]=='0')
                {flag=true;break;}
            }
        }}
        // cout<<one<<endl;
       if(flag)cout<<one<<endl;
       else if(zero>0)cout<<one-1<<endl;
       else cout<<one-2<<endl;
    }
return 0;
}