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
        string S;
        cin>>S;
        int total=0;
        vin v;
        lop(S.size()){
            total+=int(S[i])-96;
            v.pb(int(S[i])-96);
        }
      int ct=0;
        if(!(S.size()&1)){
            cout<<"Alice"<<" "<<total<<endl;
        }
        else{
            if(S[0]<S[S.size()-1]){
                total=total-int(S[0])+96;
                ct=1;
            }
            else{
                total=total-int(S[S.size()-1])+96;
                ct=2;
            }
            if(ct==1){
            if(int(S[0])-96>total)
            cout<<"Bob"<<" "<<int(S[0])-96-total<<endl;
            else 
                cout<<"Alice"<<" "<<total-int(S[0])+96<<endl;
            }
            else if(ct==2){
            if(int(S[S.size()-1])-96>total)
            {
                cout<<"Bob"<<" "<<int(S[S.size()-1])-96-total<<endl;
            }
            else{
                cout<<"Alice"<<" "<<total-int(S[S.size()-1])+96<<endl;
            }
            }
        }
    }
return 0;

}