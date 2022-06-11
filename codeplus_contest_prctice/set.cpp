//Given N strings ,print unique strings in lexographical order
// N<=1e5
//|S|<=1e5
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
void print(set<string>&lala)
{
    for(auto value:lala)
    {
        cout<<value<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    int N;
    cin>>N;
    set<string>s;
    lop(N)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    print(s);

return 0;

}