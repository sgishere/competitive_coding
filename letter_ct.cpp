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

    string S;
    cin>>S;
    int arr[53]={0};
    lop(S.size())
    {int y;
        int x=int(S[i]);
        if(x>=97 and x<=122)
        {
            y=x-96;
            arr[y]++;
        }
        else{
            y=x-38;
            arr[y]++;
        }
    }
    int max=max_element(arr,arr+53)-arr;
    if(max>=1 and max<=26)
    cout<<char(max+96);
    else
    cout<<char(max+38);
return 0;

}