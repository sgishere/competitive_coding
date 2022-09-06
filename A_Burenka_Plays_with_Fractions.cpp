#include <bits/stdc++.h>
#include<algorithm>
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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int temp1=a;
        a=a/(__gcd(a,b));
        b=b/(__gcd(temp1,b));
        int temp2=c;
        c=c/(__gcd(c,d));
        d=d/(__gcd(temp2,d));
        if((a==0 and c==0) or (a*d==b*c))cout<<0<<endl;
        else if((a==0 or c==0) or ((a*d)%(b*c)==0 or (b*c)%(a*d)==0))cout<<1<<endl;
        else cout<<2<<endl;
    }
return 0;

}