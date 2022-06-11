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
        string X;
        cin>>X;
        string Y;
        cin>>Y;
        int freq1[27]={0};
        int freq2[27]={0};
        lop(X.size()){
            int x=X[i];
            int y='`';
            freq1[x-y]++;
        }
        lop(Y.size()){
            int x=Y[i];
            int y='`';
            freq2[x-y]++;
        }
       int ct=0;
        for(int i=1;i<=26;i++){
            if(freq1[i]>0 and freq2[i]>0)
            {
                cout<<"YES"<<endl;
                ct++;break;
            }
        }
        if(ct==0)cout<<"NO"<<endl;
    }
return 0;

}