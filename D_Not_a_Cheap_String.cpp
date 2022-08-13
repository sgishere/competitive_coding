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
        int K;
        cin>>K;
        int total=0;
        lop(S.size()){
            total+=int(S[i])-96;
        }
        vin ans;
        string temp=S;
        sort(all(temp));
       for(int i=temp.size()-1;i>=0;i--){
        if(total>K){
        total=total-int(temp[i])+96;
        ans.pb(int(temp[i])-96);
        temp.pop_back();
        }
        else break;
       }
        map<int,int >m;
       lop(ans.size()){
            m[ans[i]]++;
       }
      lop(S.size()){
        if(m[int(S[i])-96]>0){
            m[int(S[i])-96]--;
            continue;
        }
        cout<<S[i];
      }
      cout<<endl;
    }
return 0;

}