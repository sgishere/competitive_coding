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
vector<int>tree[N];
int height[N];
int depth[N];
void dfs(int vertex,int parent){
    for(int child:tree[vertex]){
        if(child==parent)continue;
        //TAKE ACTION ON CHILD BEFORE ENTERING CHILD NODE
        // WE WILL CALCULATE DEPTH OF ANY NODE WHEN WE R GOING DOWNWARDS
        // BY DOING DEPTH[child]=depth[vertex]+1;
        depth[child]=depth[vertex]+1;
        dfs(child,vertex);
        // WE WILL CALCULATE HEIGHT OF ANY NODE WHEN WE ARE COMING BACK after doing 
        // dfs(going through it's child) AND GOING UPWARDS
        // BY DOING HEIGHT[vertex]=max(HEIGHT[vertex],HEIGHT[CHILD]+1);
        height[vertex]=max(height[vertex],height[child]+1);
        //TAKE ACTION ON CHILD AFTER EXITING CHILD NODE
    }
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int v1,v2;
        cin>>v1>>v2;
        tree[v1].pb(v2);
        tree[v2].pb(v1);
    }
    dfs(1,-1);
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" "<<"Height :"<<height[i]<<" "<<"Depth :"<<depth[i]<<endl;
    }


    return 0;

}