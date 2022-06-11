#include <bits/stdc++.h>
#include<unordered_map>>
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

    int N;
    cin>>N;
    unordered_map<int,int>m;
    lop(N)
    {
        int x;
        cin>>x;
        m[x]++;

    }
    int Q;
    cin>>Q;
    while(Q--)
    {
        int n;
        cin>>n;
        cout<<m[n]<<endl;
    }
return 0;

}