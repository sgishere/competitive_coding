#include <bits/stdc++.h>
using namespace std; 
int sum(int times,int num)
{
    if(times==1)
    return num*(num+1)/2;
    else{
        return sum(times-1,num*(num+1)/2);
    }
}
int main(){
    int T;
    cin>>T;
    while(T--)
    {

    int X,Y;
    cin>>X>>Y;
    cout<<sum(X,Y);
    // cout<<sum(4);
    }


return 0;
}