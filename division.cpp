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
        int N;
        cin>>N;
        if(N>=1900)cout<<"Division 1"<<endl;
        else if(N>=1600 and N<=1899)cout<<"Division 2"<<endl;
        else if(N>=1400 and N<=1599)cout<<"Division 3"<<endl;
        else cout<<"Division 4"<<endl;
    }
return 0;

}