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
        int N,K;
        cin>>N>>K;
        int arr[N+1];
        arr[0]=0;
       for(int i=1;i<=N;i++){
            cin>>arr[i];
        }
        const int n=101;
        int vis[n]={0};
        vis[0]=0;
        for(int i=1;i<=K;i++){
            vis[arr[i]]=1;
        }
        int ct=0;
        for(int i=1;i<=K;i++){
            if(vis[i]==0)ct++;
        }
        cout<<ct<<endl;
    }
return 0;

}