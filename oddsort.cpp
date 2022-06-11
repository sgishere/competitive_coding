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

    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int arr[N];
        lop(N)cin>>arr[i];
        for(int i=0;i<N-1;i++)
        {
            if((arr[i+1]<arr[i]) and ((arr[i+1]+arr[i])&1))
            {
                swap(arr[i+1],arr[i]);
            }
        }
        lop(N)cout<<arr[i]<<" ";
        cout<<endl;
    }
return 0;

}