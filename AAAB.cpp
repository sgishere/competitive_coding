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
    string s;
    cin>>s;
    int n=s.length();
    stack<char>st;
    if(s[n-1]!='B'){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            st.push('A');
        }
        else{
            if(st.empty()){
                cout<<"NO"<<endl;
                return;
            }
            else{
                st.pop();
            }
        }
    }
    if(st.size()==n){
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
        return;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int T;
    cin>>T;
    while(T--)
    {
        solve();
        // lop(s.size()){
        //     if(s[i]=='B')countb++;
        // }
        // if(s[s.size()-1]=='B'){
        // if(countb>(s.size())/2){
        //     cout<<"NO"<<endl;
        // }
        // else{
        //     cout<<"YES"<<endl;
        // }
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }
        
        
    }
return 0;

}