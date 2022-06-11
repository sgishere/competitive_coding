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
        int N,K;
        cin>>N>>K;
        vin v(N);
        lop(N)cin>>v[i];
        int min_number;
        lop(K)
        {
            min_number=*min_element(v.begin(),v.end());
            auto index=find(v.begin(),v.end(),min_number)-v.begin();
            if(index>0 and index <N-1)
            {
                if(v[index]<=v[index-1])
                v[index]=v[index-1];
                else
                v[index]=v[index+1];
            }
            else if(index==0)
            {
                if(v[index+1]>=v[index])
                v[index]=v[index+1];
            }
            else
            {
                if(v[index-1]>=v[index])
                v[index]=v[index-1];
            }
        }
        cout<<min_number<<endl;
        
    }
return 0;

}