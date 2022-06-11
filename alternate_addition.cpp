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
void solve(){
     int T;
    cin>>T;
    while(T--){
        int X,Y;
        cin>>X>>Y;
        int lamba=Y-X;
        if((lamba+2)%3==0)
        {cout<<"YES"<<endl;}
        else if((lamba)%3==0)
        {cout<<"YES"<<endl;}
        else{
            cout<<"NO"<<endl;
        }

    }
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    solve();
   
return 0;

}