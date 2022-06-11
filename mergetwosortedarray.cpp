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

    int n;
    cin>>n;
    int arr[n/2];
    lop(n/2)cin>>arr[i];
    int brr[n/2];
    lop(n/2)cin>>brr[i];
    int ans[n];
    int i=0,j=0;
    for(int k=0;k<n;k++){
        if(i==n/2){
                ans[k]=brr[j];
                j++;
            }
        else if(j==n/2){
                ans[k]=arr[i];
                i++;
        }
        else if(arr[i]<brr[j]){
            ans[k]=arr[i];
            i++;
        }
        else{
            ans[k]=brr[j];
            j++;
        }
    }
    lop(n)cout<<ans[i]<<" ";
return 0;
    }

