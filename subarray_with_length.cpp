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
    while(T--)
    {
        int N;
        cin>>N;
        int arr[N];
        lop(N) cin>>arr[i];int ct=0;
        lop(N)
        {
            int x=i;
            while(x<N)
            {   
                vin v;
                for(int j=i;j<=x;j++)
                {
                    v.push_back(arr[j]);
                }
                auto find_length=find(v.begin(),v.end(),v.size());
                if(find_length!=v.end())ct++;
                x++;
            }
        }
        cout<<ct<<endl;
    }
return 0;

}