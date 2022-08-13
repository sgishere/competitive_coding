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
        string X;
        string Y;
        cin>>X>>Y;
        string ans1;
        for(int i=N-M;i<N;i++){
            ans1.pb(X[i]);
        }
        string ans2=ans1;
        if(ans1[0]=='0'){
            for(int i=0;i<N-M;i++){
                if(X[i]=='1')
                {
                    ans2[0]='1';
                    break;
                }
            }
        }
        else{
            for(int i=0;i<N-M;i++){
                if(X[i]=='0')
                {
                    ans2[0]='0';
                    break;
                }
            }
        }
        if(Y==ans1 or Y==ans2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;

}