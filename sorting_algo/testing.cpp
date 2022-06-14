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
const int N=1e5+7;
int visited[N];
vector<int>graph[N];
bool ans=0;
void dfs(int vertex,int parent){
    visited[vertex]=1;
    for(int child:graph[vertex]){
        if(!visited[child]){
            dfs(child,vertex);
        }
        else if(child!=parent){
            ans=1;
            break;
        }
        // else{
        //     continue;
        // }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].pb(v2);
        graph[v2].pb(v1);
    }
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            dfs(i,-1);
        }
    }
    if(ans==1){
        cout<<"YES,Loop is there\n";
    }
    else{
        cout<<"NO Loop\n";
    }
return 0;

}