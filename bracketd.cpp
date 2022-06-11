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

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int T;
    cin>>T;
    while(T--)
    {
        string S;
        cin>>S;
        stack<char>v;int count=0;
        lop(S.size())
        {
            if(S[i]=='(')
                v.push('(');
            else
            {
                if(v.empty())
                {count++;}
                else
                v.pop();
            }
        }
        if(v.size()==0 and count==0)cout<<"VALID"<<endl;
        else cout<<"Not valid"<<endl;
    }
return 0;

}