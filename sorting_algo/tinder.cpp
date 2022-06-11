#include <bits/stdc++.h>
using namespace std; 
const int n=1e6+7;
long long arr[n];
int couples[n];
int main(){
arr[0]=INT_MAX;
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a]=b;
    }
    // int x=*max_element(arr,arr+n);
    int count=0;
    for(int i=1;i<=n;i++)
    {   int z=arr[i];
        if(arr[z]==i)
        {
            count+=1;
            if(i<z)
            {
                couples[i]=z;
            }
            else{
                couples[z]=i;
            }
            arr[i]=INT_MIN;
        }
    }
    int y=*max_element(couples,couples+n);
    cout<<count<<endl;
    for(int i=1;i<y;i++)
    {
        if(couples[i]!=0)
        {
            cout<<i<<" "<<couples[i]<<endl;
        }
    }
return 0;
}