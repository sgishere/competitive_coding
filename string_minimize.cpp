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
    while(T--){
        int N;
        cin>>N;
        int M;
        cin>>M;
        int arr[N];
        lop(N)cin>>arr[i];
        string S;
        lop(M)S.pb('B');
        lop(N){
            if(arr[i]-1<M-arr[i] and S[arr[i]-1]=='B')
            S[arr[i]-1]='A';
            else if(arr[i]-1>M-arr[i] and S[M-arr[i]]=='A')
            S[arr[i]-1]='A';
            else
            S[M-arr[i]]='A';
        }
        cout<<S<<endl;
    }
return 0;

}