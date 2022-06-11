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
vector<int>current_connected_componened;
vector<vector<int> >connected_components;
bool vis[N];
void dfs(int vertex){
     // TAKE ACTION ON VERTEX AFTER ENTERING THE VERTEX
    vis[vertex]=1;
    current_connected_componened.pb(vertex);
    for(int child:graph[vertex]){
        if(vis[child]==1){
            continue;
        }
        // TAKE ACTION ON CHILD BEFORE ENTERING CHILD NODES
        dfs(child);
        // TAKE ACTION ON CHILD AFTER EXITING CHILD NODES
    }
    // TAKE ACTION ON VERTEX BEFORE EXITING VERTEX
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int n,e;
    cin>>n>>e;
    int v1,v2;
    for(int i=1;i<=e;i++){
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    // TO COUNT CONNECTED COMPONENTS I WILL COUNT UNVISITED NODES AFTER RUNNING DFS FOR A PARTICULAR NODE
    for(int i=1;i<=n;i++){
        // if visited
        if(vis[i])continue;
        // if not visited then mark all connected nodes to this vertex by calling dfs of this vertex
        current_connected_componened.clear();
        dfs(i);
        connected_components.pb(current_connected_componened);
    }
    cout<<"No. of connected components is:-"<<connected_components.size()<<endl;// GIVING TOTAL NUMBER OF CONNECTED COMPONENTS
    //PRINTING ALL CONNECTED COMPONENTS
    for(vector<int> f:connected_components){
        for(int x:f){
            cout<<x<<" ";
        }
        cout<<endl;
    }
return 0;

}