// THIS IS IMPORTANT
// Property
// a^b=c^d means a^c=b^d
// i^j=k means i^k=j means j^k=i
//IN GENERAL                                    (NOT RELATED TO QUESTION)
// Now we have 2 ways to count number of pairs while traversing through two arrays of same size
// Either we will store all the corresponding pair (a[i],b[i]) value which are satisfying some condition acc to any question in map with their count.
//Then we will iterate through map and use count C 2 for all the elements in map and add them to get total number of pairs satisfying. 

//          OR                      (IMPORTANT THING) 
// We will iterate from 0 to n-1 in both arrays simultaneously and in map we will begin to store every x calculated value 
// for each pair and add it to count. and also then we will increment that value in map.
//====>> map<int,int>m;     c+=m[a[i]*b[i]];  m[a[i]*b[i]]++; 
// Like above example will store the numbers of pairs for which product is same in both arrays.
// Also there's a good practice question in starter 38 named good pairs.
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
        ll N;
        cin>>N;
        vin arr(N);
        vin brr(N);
        lop(N)cin>>arr[i];
        lop(N)cin>>brr[i];
        map<ll,ll>m;
        // vin crr(N);
        // lop(N){crr[i]=arr[i]^brr[i];m[crr[i]]++;};
        // ll ans=0;
        // for(auto it:m)
        // {
        //     ll x=it.second;
        //   ans+=(x*(x-1)/2);
        // }
        // cout<<ans<<endl;
        ll ct=0;
        lop(N)
        {
            ct+=m[arr[i]^brr[i]];
            m[arr[i]^brr[i]]++;
        }
        cout<<ct<<endl;
        
    }
   
return 0;

}