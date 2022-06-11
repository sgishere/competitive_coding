//sg69pro code
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
const int M=998244353;
int binary_exp(int a,int b)
{    if(b==0) return 1;
    ll res=binary_exp(a,b/2);
    if(b&1) 
    return (a*(res*res)%M)%M;
    else 
    return (res*res)%M;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
 
    int T;
    cin>>T;
    while(T--)
    {
        int x,y;
        cin>>x>>y;
        if(x==1 or y==1)
        {
            if(x+y>=4)
            cout<<-1<<endl;
            else if(x+y==2)cout<<0<<endl;
            else if(x+y==3)cout<<1<<endl;
        }
        else{
            cout<<2*(max(x,y))-2-(x+y)%2<<endl;
        }
        
      }  
    
return 0;
 
}