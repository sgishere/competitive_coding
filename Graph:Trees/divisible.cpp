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
        int X,Y;
        cin>>X>>Y;
        if(X%3==0 or Y%3==0)
        {
            cout<<0<<endl;
        }
        else if(X%3+Y%3==2)cout<<1<<endl;
        else if(X%3+Y%3==3)cout<<2<<endl;
        else if(X%3+y%3==4)cout<<1<<endl;

    }
return 0;

}