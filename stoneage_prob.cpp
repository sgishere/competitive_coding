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

    ll N,Q;
    cin>>N>>Q;
    vll arr(N+1);
    vll brr(N+1);
    ll sum=0;
    for(int i=1;i<=N;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    ll temp=0;int last=0;
    for(int i=1;i<=Q;i++){
        ll x,index,z;
        cin>>x;
        if(x==1){
            cin>>index>>z;
            if(brr[index]<last){
                arr[index]=temp;
                brr[index]=last;
            }
            sum+=z-arr[index];
            arr[index]=z;
        }
        else{
           cin>>z;
           sum=1LL*N*z;
           temp=z;
           last=i;
        }
        cout<<sum<<endl;
    }
return 0;

}