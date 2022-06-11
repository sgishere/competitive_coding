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

    int N;
    cin>>N;
    int arr[]={2,4,5,7,8,9,12};
    int L=0;
    int R=6;
    int count=0;
    while(R>=L)
    {   int mid=L+((R-L)/2);
        if(arr[mid]==N)
            {cout<<"At "<<mid<<" index "<<N<<" is found"<<endl;count++;break;}
        else if( arr[mid]>N)
            R=mid-1;
        else if(arr[mid]<N)
            L=mid+1;
    }
    if(count==0)cout<<-1<<endl;
return 0;

}