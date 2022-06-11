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
        int mny;
        cin>>mny;
        vin sweetscost;
        lop(N)
        {
            int x;
            cin>>x;
            sweetscost.pb(x);
        }
        vin discount;
        lop(N)
        {
            int x;
            cin>>x;
            discount.pb(x);
        }
        int diff[N];
        int min=INT_MAX;
        int index=-1;
        map<int,int>cost_diff;
        lop(N){
            diff[i]=sweetscost[i]-discount[i];
            // if(min>diff[i])
            // {   min=diff[i];
            //     index=i;
            // }
            int x=diff[i];
            int y=sweetscost[i];
            cost_diff.insert(pair<int,int>(x,y));
        }
        
        int count=0;
        // sort(diff,diff+N);
        for(auto it:cost_diff)
        {  
            while(mny>=it.second)
            {
                mny=mny-it.first;
                count++;
            }
         }
         cout<<count<<endl;
    }
return 0;
}