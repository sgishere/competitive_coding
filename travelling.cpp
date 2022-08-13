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
        int N;
        cin>>N;
        vin v1;
        vin v2;
        vin v3;
        vin v4;
        lop(N){
            int x,y;
            cin>>x>>y;
            if(x==0 and y>0)
            v1.pb(abs(y));
            else if(y==0 and x>0)
            v2.pb(abs(x));
            else if(x==0 and y<0)
            v3.pb(abs(y));
            else{
                v4.pb(abs(x));
            }
        }
        int a=0,b=0,c=0,d=0;
        if(!v1.empty())
        a=*max_element(v1.begin(),v1.end());
         if(!v2.empty())
         b=*max_element(v2.begin(),v2.end());
         if(!v3.empty())
        c=*max_element(v3.begin(),v3.end());
         if(!v4.empty())
         d=*max_element(v4.begin(),v4.end());
        cout<<2*(a+b+c+d)<<endl;
    }
return 0;

}