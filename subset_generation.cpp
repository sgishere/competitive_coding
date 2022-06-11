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
vector<vector<int> >subsets;
void generate(vector<int>&subset,int i,vector<int>nums)
{
    if(i==nums.size()){
        subsets.pb(subset);
        return ;
    }
    generate(subset,i+1,nums);
    subset.pb(nums[i]);
    generate(subset,i+1,nums);
    subset.pop_back();
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int N;
    cin>>N;
    vin arr(N);
    lop(N)cin>>arr[i];
    vector<int>empty;
    generate(empty,0,arr);
    for(auto value:subsets)
    {
        for(auto x:value){
            cout<<x<<" ";
        }
        cout<<endl;
    }
return 0;

}