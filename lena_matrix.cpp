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
        int N,M;
        cin>>N>>M;
        vpll v;
        char arr[N+1][M+1];
        for(int i=1;i<=N;i++){
            for(int j=1;j<=M;j++){
                cin>>arr[i][j];
                if(arr[i][j]=='B'){
                    v.pb(make_pair(i,j));
                }
            }
        }
        sort(v.begin(),v.end());
        int x=v[0].first;
        int y=v[0].second;
        int a=v[v.size()-1].first;
        int b=v[v.size()-1].second;
        if((x+a)%2==0){
            cout<<(x+a)/2<<" ";
        }
        else if ((x+a)&1){
            cout<<(x+a)/2 +1<<" ";
        }
         if((y+b)%2==0){
            cout<<(y+b)/2<<" ";
        }
        else if ((y+b)&1){
            cout<<(y+b)/2 +1<<" ";
        }
        cout<<endl;
    }
    
return 0;

}