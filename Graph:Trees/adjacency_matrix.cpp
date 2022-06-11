// GRAPH REPRESENTATION
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
const int N=1e3+10;
int graph[N][N];
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    // N vertices
    // M edges
    // W weight of each node 
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int v1,v2,w;
        cin>>v1>>v2>>w;
        graph[v1][v2]=w;
        graph[v2][v1]=w;
    }
    // it takes O(N^2) space complexity
    // and hence we cannot enter N=10^5 etc
return 0;

}