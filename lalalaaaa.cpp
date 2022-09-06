#include <bits/stdc++.h>
using namespace std; 
int sum(vector<int>b)
{ int summ=0;
    for(int i=0;i<b.size();i++)
    {
        summ+=b[i];
    }
    return summ;
}
int main(){
    vector<int>a;
    cout<<"Enter elements of vector"<<endl;
    for(int i=0;i<5;i++)
    {   int n;
        cin>>n;
        a.push_back(n);
    }
    cout<<sum(a);

return 0;
}