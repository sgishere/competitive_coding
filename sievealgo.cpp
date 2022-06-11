//sg69pro code
// we will take input of a number and 
//tell whether it is prime or not using precomputation
//to precompute we will first set all the bool value of 
//all numbers as 1 (showing all numbers are prime)
//after that we will run loop from 2to N such that if bool value of arr[i] is 1
//we will set bool value of all the multiples of it as 0 showing compositie
//and this will continue setting bool of all primes as 1 and all compisites as 0
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
    const int N=1e5+7;
    vector<bool>v(N,true);
    v[0]=v[1]=false;
    for(int i=2;i<N;i++)
    {
        if(v[i]==true)
        {
            for(int j=2*i;j<N;j+=i)
            {
                v[j]=false;
            }
        }
    }

    int T;
    cin>>T;
    lop(T)
    {
         if(v[i]==1)cout<<i<<" is prime"<<endl;
        else cout<<i<<" is composite"<<endl;
    }  
    
    
return 0;

}