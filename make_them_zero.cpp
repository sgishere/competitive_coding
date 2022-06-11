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
int binary_exp(int a,int b)
{    if(b==0) return 1;
    ll res=binary_exp(a,b/2);
    if(b&1) 
    return a*res*res;
    else 
    return res*res;
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        set<int>s;
        lop(N){
            int x;
            cin>>x;
            s.insert(x);
        }
        int count=0;
        set<int>unique_pow;
        for(auto it:s)
        {
            int y=it;
            while(y>0)
            {
                int p=(int)log2(y);
                int power=binary_exp(2,p);
                unique_pow.insert(power);
                y-=power;
            }
        }
        count=unique_pow.size();
        cout<<count<<endl;
    }
return 0;

}