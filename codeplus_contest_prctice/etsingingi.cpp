
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
#define T int T;cin>>T;while(T--)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    T{  
		int N;
		cin>>N;
	    int freq[27]={0};
		// freq[0]=0;s
		lop(N)
		{
		    string s;
		    cin>>s;
		    lopj(s.size())
		    {   int x=s[j];
		        freq[x-96]++;
		    }
		}
// 		int c=freq[3];int o=freq[15];int e=freq[5];int f=freq[6];int h=freq[8];int d=freq[4];
		
		for(int i=1;i<=26;i++)
		{
		    cout<<freq[i]<<endl;
		}
		
    }
return 0;

}

