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
    while(T--)
    {
        int N;
        cin>>N;
        int arr[N];
        lop(N)cin>>arr[i];
        sort(arr,arr+N);
        vin v_fhalf;
        vin v_shalf;
        vin ans;int ct=0;
        if(N&1)cout<<"NO"<<endl;
        else{
            int mid=N/2;
            lop(mid)
                v_fhalf.pb(arr[i]);
            for(int i=mid;i<N;i++)
                v_shalf.pb(arr[i]);
            lop(N/2){
                ans.pb(v_fhalf[i]);
                ans.pb(v_shalf[i]);
            }
            //  lop(N)cout<<ans[i]<<" ";
            lop(ans.size()){
                if(i==0)
                {
                    if(ans[i]>ans[i+1] and ans[i]>ans[N-1])
                    ct++;
                    else if(ans[i]<ans[i+1] and ans[i]<ans[N-1])
                    ct++;
                }
                else if(i==(N-1))
                {
                    if(ans[i]>ans[0] and ans[i]>ans[N-2])
                    ct++;
                    else if(ans[i]<ans[0] and ans[i]<ans[N-2])
                    ct++;
                }
                else{
                if(ans[i]>ans[i+1] and ans[i]>ans[i-1])
                ct++;
                else if(ans[i]<ans[i+1] and ans[i]<ans[i-1])
                ct++;
                }
            }
            if(ct==N){cout<<"YES"<<endl;
            for(auto val:ans)cout<<val<<" ";
            cout<<endl;}
            else cout<<"NO"<<endl;
        }
    }
return 0;

}