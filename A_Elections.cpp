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
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b and b==c){
            cout<<(1)<<" "<<(1)<<" "<<(1)<<endl;
        }
        else if(a==b and b<c){
            cout<<(c-a+1)<<" "<<(c-b+1)<<" "<<0<<endl;
        }
        else if(a==b and b>c){
            cout<<(1)<<" "<<(1)<<" "<<a-c+1<<endl;
        }
        else if(b==c and a>c){
            cout<<0<<" "<<a-b+1<<" "<<a-b+1<<endl;
        }
        else if(b==c and c>a){
            cout<<c-a+1<<" "<<1<<" "<<1<<endl;
        }
        else if(a==c and b>a){
            cout<<(b-a+1)<<" "<<0<<" "<<(b-a+1)<<endl;
        }
        else if(a==c and a>b){
            cout<<1<<" "<<(a-b+1)<<" "<<1<<endl;
        }
        else{
            int x=max(a,max(b,c));
            if(x==a){
                cout<<0<<" "<<x-b+1<<" "<<x-c+1<<endl;
            } 
            else if(x==b){
                cout<<x-a+1<<" "<<0<<" "<<x-c+1<<endl;
            }
            else{
                cout<<x-a+1<<" "<<x-b+1<<" "<<0<<endl;
            }
        }
    }
return 0;

}