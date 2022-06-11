#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;
    cin>>n;
   vector<int>va(n+1);
    vector<int>vb(n+1);
    va[0]=INT_MIN;
    vb[0]=INT_MIN;
    for(int i=1;i<=n;i++){
        cin>>va[i];
    }
    for(int i=1;i<=n;i++){
        cin>>vb[i];
    }
    if(va==vb){cout<<"YES"<<endl;
    return;}
    if(n==1){
        if(va[1]>=vb[1]){
            cout<<"YES"<<endl;
            return ;
        }
        else{
            
            cout<<"NO"<<endl;
            return ;
        }
    }
    int k=0,c=0,d=0,g=0;
    for(int i=1;i<=n;i++){
        if(vb[i]>va[i]){cout<<"NO"<<endl;return ;}
        if(vb[i]!=0){
            if(va[i]>=vb[i]){
           k= va[i]-vb[i];
           break;
        }
        else{
            g++;
        }
        }
        else{
            g++;
        }
        
        
    }
    if(g==n){cout<<"YES"<<endl; return ;}
       for(int i=1;i<=n;i++){
        if(vb[i]==0){
            if(va[i]<=k){
                c++;

            }
            else{ 
             cout<<"NO"<<endl;return;}
        }
        else{
            
        if((va[i]-vb[i])==k){
            d++;

        }
        else{
            
            cout<<"NO"<<endl;
            return ; 
        }       
        }
    }
    cout<<"YES"<<endl;



}
signed main()
{
    int t;
    cin>>t;
    while(t--){
    solve();
}
}