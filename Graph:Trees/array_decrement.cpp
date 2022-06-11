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
        ll N;
        cin>>N;
        ll arr[N];
        ll brr[N];
        ll crr[N];
        lop(N){
            cin>>arr[i];
        }
        lop(N){
            cin>>brr[i];
        }
        int push=0;
       lop(N){
            crr[i]=arr[i]-brr[i];
            if(crr[i]<0){
                push++;
                break;
            }
        }
        if(push>0){
            cout<<"NO"<<endl;
            continue;
        }
        ll x=*max_element(crr,crr+N);
        if(N==1){
            if(arr[0]>=brr[0])cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
        lop(N){

            if(arr[i]>=x)
            arr[i]=arr[i]-x;
            else{
                arr[i]=0;
            }
        }
        int ct=0;
        lop(N){
            if(arr[i]==brr[i])ct++;
        }
        if(ct==N)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
    }
return 0;

}