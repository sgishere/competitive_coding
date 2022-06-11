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
        int countodd=0;
        int countev=0;
        int cntev=0;
        int cntodd=0;
        lop(N)
        {
            cin>>arr[i];
            if(i%2==0)
            {
                if(arr[i]&1)countodd++;
                else countev++;
            }
            else{
                if(arr[i]&1)cntodd++;
                else cntev++;
            }
        }
        if(countodd !=0 and countev!=0)cout<<"NO"<<endl;
        else if(cntodd!=0 and cntev!=0)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
        }
    }
return 0;

}   