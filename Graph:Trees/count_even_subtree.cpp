//COUNT EVEN NUMBERS IN A SUBTREE
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
int count_even_subtree[N];
vector<int>tree[N];
void dfs(int vertex,int parent){
    if(!(vertex&1))count_even_subtree[vertex]++;
    for(int child:tree[vertex]){
        if(child==parent)continue;
        dfs(child,vertex);
        count_even_subtree[vertex]+=count_even_subtree[child];
    }
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int n;
    cin>>n;
    lop(n-1){
        int v1,v2;
        cin>>v1>>v2;
        tree[v1].pb(v2);
        tree[v2].pb(v1);
    }
    dfs(1,-1);
    for(int i=1;i<=n;i++){
        cout<<i<<" "<<count_even_subtree[i]<<endl;
    }
return 0;

}