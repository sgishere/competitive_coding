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
        vector<int>fhalf;
        vector<int>shalf;
        if(N%2==0){
            int x=N/2;
            for(int i=x;i>=1;i--){
                fhalf.pb(i);
            }
            int y=x+1;
            for(int i=y;i<=N;i++){
                shalf.pb(i);
            }
        }
        else{
            int x=N/2+1;
            for(int i=x;i>=1;i--){
                fhalf.pb(i);
            }
            int y=x+1;
            for(int i=y;i<=N;i++){
                shalf.pb(i);
            }
        }
        int i=1,m=0,k=0;
        while(i<=N){
            if(i&1){cout<<fhalf[k]<<" ";k++;}
            else {cout<<shalf[m]<<" ";m++;}
            i++;
        }
    }
return 0;

}