//SG69CODE
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define l long
const int N=1e7+1;
int freq[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
   {
       cin>>arr[i];
       freq[arr[i]]++;
   } 
   int Q;
   cin>>Q;
   while(Q--)
   {
       int x;
       cin>>x;
       cout<<freq[x]<<endl;
   }
return 0;
}
