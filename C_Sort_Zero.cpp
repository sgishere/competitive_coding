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
        int arr[N];
        lop(N){
            cin>>arr[i];
        }
        map<int,int>m;
        int j=N-1;
        for(int i=N-1;i>=0;i--){
            if(arr[i]<arr[i-1]){
                j=i-1;
                break;
            }
        }
        for(int i=j+1;i<N;i++){
            m[arr[i]]=i;
        }
        for(int i=0;i<=j;i++){
            if(m.find(arr[i])==m.end())continue;
            else j=max(j,m[arr[i]]);
        }
        set<int>s;
        lop(j+1){
            s.insert(arr[i]);
        }
        if(N==1)cout<<0<<endl;
        else
        cout<<s.size()<<endl;

    }
    
return 0;

}