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
    const int n=1e5+10;
    vll squares(n);
    lop(n){
    squares[i]=i*1LL*i;
    }
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        vin A(N);
        vin B(N);
        lop(N){
            A[i]=i;
        }
        lop(N){
            B[i]=i;
        }
        ll start=N-1;
        while(start>=0){
            ll current=A[start];
            ll y=*lower_bound(all(squares),current);
            ll move=y-current;
            reverse(B.begin()+move,B.begin()+current+1);
            start=move-1;
        }
        lop(N){
            cout<<B[i]<<" ";
        }
        cout<<endl;
    }
return 0;

}   