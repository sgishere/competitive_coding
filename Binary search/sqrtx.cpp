  Question  //is N a square?
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
#define d double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int N;
    cin>>N;
    d L=0;
    d R=N;
    d mid;
    d accuracy=1e-10;
    int ans=1;
    while((R)>=L+accuracy)
    {
        mid=L+((R-L)/2);
        if(mid*mid>=N)
            {R=mid;}
        else 
           { L=mid;}
    }
    // cout<<R<<endl;
     int x=floor(R);
    //   cout<<x<<endl;
    if(x*x==N)cout<<"YES"<<endl;
    else cout<<"NO"<<endl    ;
return 0;

}