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
        int arr[N];
        int brr[N];
        lop(N)cin>>arr[i];
        lop(N)cin>>brr[i];
        cout<<brr[0]-arr[0]<<" ";
        for(int i=1;i<N;i++){
            if(arr[i]>brr[i-1]){
                cout<<brr[i]-arr[i]<<" ";
            }
            else{
                cout<<brr[i]-brr[i-1]<<" ";
            }
        }
        cout<<endl;
    }
return 0;

}