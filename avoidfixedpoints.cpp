#include <bits/stdc++.h>
using namespace std;
int main() {
       int t;
       cin>>t;
       for(int z=0;z<t;z++){
           int n;
           cin>>n;
           vector<int> v;
           for(int i=0;i<n;i++) {
               int k;
               cin>>k;
               v.push_back(k);
           }
           int c=0;
           for(int i=1;i<v.size()+1;i++){
               if(v[i-1]==i) {
                   c++;
                   v.insert(v.begin()+i-1,69);
               }
           }
           cout<<c<<"\n";
       }
  return 0;
}