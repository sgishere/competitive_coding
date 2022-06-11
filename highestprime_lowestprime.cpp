//sg69pro code
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
#define tc int T; cin>>T; while(T--)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    const int n=1e5+7;
    vector<bool>v(n,true);
    v[0]=v[1]=false;
    vector<int>highest_prime(n);
    vector<int>lowest_prime(n);
    for(int i=2;i<n;i++)
    {
        if(v[i]==true)
        {   highest_prime[i]=i;
           lowest_prime[i]=i;
            for(int j=2*i;j<n;j+=i)
            {
                v[j]=false;
                highest_prime[j]=i;
                if(lowest_prime[j]==0)
                lowest_prime[j]=i;
            }
        }
    }
    
    tc
    {
        int N;
        cin>>N;
        if(v[N]==1)
        {
            cout<<N<<" is prime\n";
            cout<<"Highest prime of "<<N<<" is "<<highest_prime[N];cout<<endl;
            cout<<"Lowest prime of "<<N<<" is "<<lowest_prime[N];cout<<endl;
        }
        else{
            cout<<N<<" is not prime\n";
            cout<<"Highest prime of "<<N<<" is "<<highest_prime[N];cout<<endl;
            cout<<"Lowest prime of "<<N<<" is "<<lowest_prime[N];cout<<endl;
        }
        
    }
return 0;
    }
