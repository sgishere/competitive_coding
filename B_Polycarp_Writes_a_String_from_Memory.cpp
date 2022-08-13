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
void solve(){
   int T;
   cin>>T;
   while(T--){
    string S;
    cin>>S;
    int ct=0;
    string temp;
    int k=0;
    int num=0;
    for(int i=0;i<S.size();i++){
        bool flag=false;
        for(int j=0;j<temp.size();j++){
            if(temp[j]==S[i]){flag=true;break;}
        }
        if(flag){continue;}
        else{
        if(temp.size()==3){ct++;temp.clear();}
        temp.pb(S[i]);num++;
        }
    }
    cout<<ceil(num/3.0)<<endl;
   }
    return;
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    solve();
return 0;

}