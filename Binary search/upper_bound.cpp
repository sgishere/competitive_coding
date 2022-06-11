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

    int arr[]={2,4,5,6,8,9};
    int low=0;
    int high=5;
    int x;
    cin>>x;
    while(high-low>1)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]>x){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    cout<<high<<endl;
return 0;

}