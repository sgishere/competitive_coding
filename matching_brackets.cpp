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
void solve()
{
    string S;
    cin>>S;
    stack<char>bracket;
    lop(S.size()){
        if(S[i]=='(')
        bracket.push('(');
        else{
            if(bracket.empty())
            cout<<"Invalid brackets"<<endl;
            bracket.pop();

        }
    }
    if(bracket.size()==0)cout<<"Brackets are valid"<<endl;
    else cout<<"Brackets are invalid"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
return 0;

}