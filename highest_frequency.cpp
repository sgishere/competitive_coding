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
    while(T--){
        int N;
        cin>>N;
        const int n=1e5+4;
        int freq[n]={0};
        int arr[N];
        lop(N){cin>>arr[i];freq[arr[i]]++;}
        int maxi=*max_element(freq,freq+N+1);
        int maxi_el=max_element(freq,freq+N+1)-max_element(freq,freq);
        if(!(maxi&1)){
            freq[maxi_el]=maxi/2;
        }
        else{
            freq[maxi_el]=maxi/2+1;
        }
        maxi=*max_element(freq,freq+N+1);
        cout<<maxi<<endl;
    }
return 0;

}