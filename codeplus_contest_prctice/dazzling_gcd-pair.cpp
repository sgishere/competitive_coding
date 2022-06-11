#include <bits/stdc++.h>
#include<algorithm>
#include<numeric>
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
        int A,B;
        cin>>A>>B;
        int count=0;
        for(int j=A+1;j<=B;j++)
        {   int Z=__gcd(A,j);
            if(Z>1)
            {
                cout<<A<<j<<endl;
                count++;
                break;
            }
        }
        if(count!=0)cout<<-1<<endl;
    }
return 0;

}   