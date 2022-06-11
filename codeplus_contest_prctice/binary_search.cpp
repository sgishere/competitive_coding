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
    vin v(N);
    lop(N)
        cin>>v[i];
    //binary search works by defining the lower index as 0 and higher index as N-1
    // I will determine whether value at index mid is > or < then the to_find value
    // if mid<to_find then i will change my search space by setting low=mid+1
    //otherwise if v[mid]>=to_find i will change my search space by setting high=mid
    //finally after all this we will remain with lower index and higher index newly updated values
    // now either lower index value will be our finding value
    // or higher index value will be our finding value
    // or we will print "Not found"
    // below code works if the array is sorted in ascending order
    //for descending order we need to reverse the search space accordingly
    int low=0;
    int high=N-1;
    int to_find;cin>>to_find;
    while(high-low>1)
    {
        int mid=(low+high)/2;
        if(v[mid]<to_find)
            low=mid+1;
        else
            high=mid;
    }
    if(v[low]==to_find)cout<<to_find<<" is found at "<<low<<" index"<<endl;
    else if(v[high==to_find])cout<<to_find<<" is found at "<<high<<" index"<<endl;
    else cout<<to_find<<" is not present in this array"<<endl;
return 0;

}