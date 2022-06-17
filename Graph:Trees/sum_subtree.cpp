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
int sum_subtree[N];
int count_ev_subtree[N];
vector<int>tree[N];
void dfs(int vertex,int parent){
    sum_subtree[vertex]+=vertex;
    for(int child:tree[vertex]){
        if(child==parent)continue;
        dfs(child,vertex);
        sum_subtree[vertex]+=sum_subtree[child];
    }
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int N;
    cin>>N;
    lop(N-1){
        int v1,v2;
        cin>>v1>>v2;
        tree[v1].pb(v2);
        tree[v2].pb(v1);
    }
    dfs(1,-1);
    for(int i=1;i<=N;i++){
        cout<<i<<" "<<sum_subtree[i]<<endl;  
    }
    return 0;
}