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
bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first!=b.first)
    return a.first>b.first;  // always return jo chahiye
    return a.second < b.second ;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int N;
    cin>>N;
    vector<pair<int,int> >v(N);
    lop(N)
    {
        cin>>v[i].first;
        cin>>v[i].second;
    } //inbuilt sort has third parameter as function of swapping 
    // this cmp swaps if return value is false
    //
    sort(v.begin(),v.end(),cmp); // sorting descending acc to first element of pairs
    lop(N)  // sorting (for same first element of pair) ascending according to second element of pairs
    {
        cout<<v[i].first<<" "<<v[i].second;
        cout<<endl;
    }

return 0;

}