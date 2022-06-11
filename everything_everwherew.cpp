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

    int Tl;
    cin>>Tl;
    while(Tl--)
    {
        int N;
        cin>>N;
        int arr[N];
        lop(N)cin>>arr[i];
        sort(arr,arr+N);
     float avg;
        int count=0;
            lop(N)
            {      int sum=0;
                lopj(N){
                    if(j!=i)
                    sum+=arr[j];
                }
                avg=(float)sum/(N-1);
                if(avg==arr[i]){
                count++;
                break;}
            }
            if(count==0)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        // }
    }
return 0;

}