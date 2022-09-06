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
        ll N;
        cin>>N;
        ll arr[N];
        ll sum=0;
        bool flag=true;
        lop(N){
            cin>>arr[i];
            if(sum<0){flag=false;}
            if(sum==0){
                if(i>0 and arr[i]!=0)
                {flag=false;}
            }
            sum+=arr[i];
        }
        if(flag and sum==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
return 0;

}