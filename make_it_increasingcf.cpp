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
        lop(N)cin>>arr[i];
        bool flag=true;
        int count=0;
        for(int i=N-2;i>=0;i--){
            while(arr[i]>=arr[i+1]){
                if(arr[i]==0){
                    flag=false;
                    break;
                }
                arr[i]=arr[i]/2;
                count++;
            }
        }
        if(flag==true)
        cout<<count<<endl;
        else cout<<-1<<endl;
    }
return 0;

}