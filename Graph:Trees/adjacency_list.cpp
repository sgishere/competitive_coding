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

const int N =1e7;
vector<pair<int,int> >graph[N];

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    lop(m){
        int v1,v2,w;
        cin>>v1>>v2>>w;
        graph[v1].pb(make_pair(v2,w));
        graph[v2].pb(make_pair(v1,w));
    }
    // for(vector<pair<int,int> : graph)
return 0;

}