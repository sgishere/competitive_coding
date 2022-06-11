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

int time(int arr[],int n,int t,int max)
{   int high=max;
    int low=1;
    while(high>low)
    {
        int mid=(low+(high-low)/2);
        int item=0;
        for(int i=0;i<n;i++)
            item+=mid/arr[i];
        if(item<t)low=mid+1;
        else high=mid;  
    }
    return high;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int t,n;
    cin>>n>>t;
    int arr[n];
    lop(n)cin>>arr[i];
    int x=*max_element(arr,arr+n);
    int y=x*t;
    cout<<time(arr,n,t,y)<<endl;
    
    
return 0;

}