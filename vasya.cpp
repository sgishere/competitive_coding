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
    ll first=0;
    ll second=0;
    vll firstv;
    vll secondv;
    ll x;
    while(T--){
        cin>>x;
        if(x>0){first+=abs(x);firstv.pb(abs(x));}
        else {second+=abs(x);secondv.pb(abs(x));}
    }
    ll ct=0;
    if(abs(first)>abs(second))cout<<"first"<<endl;
    else if(abs(second)>abs(first))cout<<"second"<<endl;
    else{
            lop(min(firstv.size(),secondv.size())){
                if(firstv[i]>secondv[i])
                {
                    cout<<"first"<<endl;
                    break;
                }
                else if(firstv[i]<secondv[i]){
                    cout<<"second"<<endl;
                    break;
                }
                else{
                    ct++;
                }
            }
        }
    
    if(ct==min(secondv.size(),firstv.size()) and ct!=0){
        if(x>0)cout<<"first"<<endl;
        else cout<<"second"<<endl;
    }

return 0;

}