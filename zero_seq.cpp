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
        int count0=0;
        lop(N){cin>>arr[i];if(arr[i]==0)count0++;}
        int freq[101]={0};
        lop(N)
            freq[arr[i]]++;
        bool flag=true;
        lop(101)
        {
            if(freq[i]>1){
                flag=false;
                break;
            }
        }
        if(count0>0)
        {
            cout<<N-count0<<endl;
        }
        else{
        if(!flag)
        {
            cout<<N<<endl;
        }
        else{
            cout<<N+1<<endl;
        }
        }
    }
return 0;

}