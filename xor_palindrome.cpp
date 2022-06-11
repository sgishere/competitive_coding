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

    ll T;
    cin>>T;
    while(T--)
    {
        ll N;
        cin>>N;
        string S;cin>>S;ll ct=0;
        lop(S.size()/2)
            if(S[i]!=S[S.size()-i-1])ct++;
        if(ct&1)cout<<((ct/2)+1)<<endl;
        else cout<<ct/2<<endl;

    }
return 0;

}