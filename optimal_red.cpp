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

    ll T;
    cin>>T;
    while(T--){
        ll N;
        cin>>N;
        ll arr[N];
        lop(N)cin>>arr[i];
        ll brr[N];
        lop(N)brr[i]=arr[i];
        sort(brr,brr+N);
        // bool yola=false;
        // lop(N){
        //     if(brr[i]==brr[i+1]){
        //         yola=true;
        //         break;
        //     }
        // }
        // int issorted=0;
        // lop(N){
        //     if(brr[i]==arr[i])issorted++;
        // }
        // if(yola){
        //     if(issorted==N)cout<<"YES"<<endl;
        //     else cout<<"NO"<<endl;
        // }
        // else{
        ll x=arr[0];
    for(int i=1;i<N;i++){
        if(arr[i-1]<arr[i]){
            x+=arr[i]-arr[i-1];
        }
        else x+=0;
    }
       ll y=brr[0];
    for(int i=1;i<N;i++){
        if(brr[i-1]<brr[i]){
            y+=brr[i]-brr[i-1];
        }
        else y+=0;
    }
        if(x<=y)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        // }
        
    }
return 0;

}