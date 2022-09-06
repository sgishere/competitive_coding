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

    ll T;
    cin>>T;
    while(T--){
        ll N,K;
        cin>>N>>K;
        ll k1=K;
        ll yola=1;
        ll yola1=2;
        ll yola2=3;
        ll yola3=4;
        vll a;
        vll b;
        map<ll,ll>m;
        if(N==2){
            if(((1+K)*2)%4==0)
            {cout<<"YES"<<endl;
            cout<<1<<" "<<2<<endl;
            }
            else if(((2+K)*1)%4==0)
            {
                 cout<<"YES"<<endl;
                cout<<2<<" "<<1<<endl;
            }
            else{
               cout<<"NO"<<endl;
            }
        }
        else if((K+3)%4==0){
            cout<<"YES"<<endl;
            for(int i=1;i<=N;i+=2){
                cout<<i<<" "<<i+1<<endl;
            }
        }
        else{
        if(K%4==0){
            cout<<"NO"<<endl;
        }
        else{
            if((K+1)%4==0){
                while(yola<=N){
                    a.pb(yola);
                    m[yola]=yola;
                    yola+=4;
                }
            }
            else if((K+2)%4==0){
                while(yola1<=N){
                    a.pb(yola1);
                    m[yola1]=yola1;
                    yola1+=4;
                }
            }
            else if((K+3)%4==0){
                while(yola2<=N){
                    a.pb(yola2);
                    m[yola2]=yola2;
                    yola2+=4;
                }
            }
            while(yola3<=N){
                b.pb(yola3);
                m[yola3]=yola3;
                yola3+=4;
            }
            cout<<"YES"<<endl;
        }
        vll c;
        vll d;
        ll i=1;
        ll sexy1=a.size();
        ll sexy2=b.size();
       for(ll i=1;i<=N;i++){
        if(m.find(i)==m.end()){
            if(sexy1>0){
            c.pb(i);sexy1--;
            }
            else if(sexy2>0){
                d.pb(i);sexy2--;
            }
        }
       }
       lop(a.size()){
        cout<<a[i]<<" "<<c[i]<<endl;
       }
       lop(b.size()){
        cout<<d[i]<<" "<<b[i]<<endl;
       }
        }
    }
return 0;

}