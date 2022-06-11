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
        int N;
        cin>>N;
        int arr[N];
        vin even;
        vin odd;
        vin minimum_steps;
        lop(N){cin>>arr[i];
        arr[i]&1?odd.pb(arr[i]):even.pb(arr[i]);}
      
        if(odd.size()==N)cout<<0<<endl;
        else if(odd.size()>0)cout<<even.size()<<endl;
        else{
            lop(N){int ct=0;
            while(!(arr[i]&1)){
                arr[i]=arr[i]/2;
                ct++;
            }
            minimum_steps.pb(ct);
            }
            int x=*min_element(minimum_steps.begin(),minimum_steps.end());
            cout<<x+even.size()-1<<endl;
        }
    }
return 0;

}