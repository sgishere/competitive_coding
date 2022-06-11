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

    ll T;
    cin>>T;
    while(T--){
        ll x,y;
        cin>>x>>y;
        ll diff;
        ll count=0;
        bool flag=true;
        x>y?diff=x/y:diff=y/x,flag=false;
        if(!((diff)&(diff-1))){
            count=log2(diff);
            flag?count+=x:count+=y;
            cout<<count<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
return 0;

}