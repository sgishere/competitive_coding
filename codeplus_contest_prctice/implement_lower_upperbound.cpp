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
int lower_bound(vector<int>&v,int element)
{
    int high=v.size()-1;
    int low=0;
    
    while(high-low>1)
    {
        int mid=(high+low)/2;
        if(v[mid]<element)
        low=mid+1;
        else
        high=mid;
    }
    if(v[low]>=element) return low;
    else if (v[high]>=element) return high;
    else return -1;
}
int upper_bound(vector<int>&v,int element)
{
    int high=v.size()-1;
    int low=0;
    int mid=(high+low)/2;
    while(high-low>1)
    {   
        int mid=(high+low)/2;
        if(v[mid]<=element)
        low=mid+1;
        else
        high=mid;
    }
    if(v[low]>element) return low;
    else if (v[high]>element) return high;
    else return -1;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int N;
    cin>>N;
    vin v(N);
    lop(N)cin>>v[i];
    sort(v.begin(),v.end());
    int x;
    cout<<"Enter number whose upper and lower bound is to be found"<<endl;
    cin>>x;
    int indexx=lower_bound(v,x);
    int indexy=upper_bound(v,x);
    cout<<"Lower bound of "<<x<<" is "<<v[indexx]<<endl;
    cout<<"Upper bound of "<<x<<" is "<<v[indexy]<<endl;
return 0;

}