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

const int N=1e5;
vector<int>graph[N];
bool vis[N];
void dfs(int vertex){
    // TAKE ACTION ON VERTEX AFTER ENTERING THE VERTEX
    cout<<vertex<<endl;
    vis[vertex]=true;
    for(int i=0;i<graph[vertex].size();i++)
    // for( int child : graph[vertex])
    {
        int x=graph[vertex][i];
        cout<<"par "<<vertex<<" child "<<x<<endl;
         if(vis[x])continue;
         // TAKE ACTION ON CHILD BEFORE ENTERING CHILD NODE
        dfs(x);
        // TAKE ACTION ON CHILD AFTER EXITING CHILD NODE
    }
    // TAKE ACTION ON VERTEX BEFORE EXITING VERTEX
    //O(vertices+edges) TIME COMPLEXITY
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int N,M;
    cin>>N>>M;
    lop(M){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].pb(v2);
        graph[v2].pb(v1);
    }
    dfs(graph[3][0]); // making any vertex as root node
return 0;

}