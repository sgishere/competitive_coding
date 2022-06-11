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

    int N,M;
    cin>>N>>M;
    int arr[N][M];
    lop(N)
    {
        lopj(M)
        cin>>arr[i][j];
    }
    int brr[M][N];
    lop(M)
    {
        lopj(N)
        {
            brr[i][j]=arr[j][i];
        }
    }
    vin arrsum;
    lop(N)
    {   int sum=0;
        lopj(M)
        {
            sum+=arr[i][j];
        }
        arrsum.pb(sum);
    }
    vin brrsum;
    lop(M)
    {   int sum=0;
        lopj(N)
        {
            sum+=brr[i][j];
        }
        brrsum.pb(sum);
    }
    int x=min(arrsum.size(),brrsum.size());
    int count=0;
    lop(x)
    {
        if(arrsum[i]==brrsum[i])
        count++;
    }
    if(count==x)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

return 0;

}