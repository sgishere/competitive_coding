#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solution(){
    ll n; cin>>n;
    string s; cin>>s;

    ll one=0,zero=0;

    for(int i=0;i<n;i++){
       if(s[i]=='1') one++;
       else zero++;
    }
    if(n&1) {
       if(((one-zero)&1)) cout<<"YES\n"; 
       else cout<<"NO\n";
    }
    else {
    if(!((one-zero)&1) ) {
       if(!(one&1) and !(zero&1)) cout<<"YES\n";
       else if((one&1) and (zero&1) and one==zero) cout<<"YES\n";
       else cout<<"NO\n";
       } 
       else cout<<"NO\n";
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        solution();
    }
    return 0;
}