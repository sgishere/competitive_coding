#include <bits/stdc++.h>
using namespace std; 
void func(int brr[])
{
    brr[0]=699;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,69};
    for(int i=0;i<8;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    func(arr);
    for(int i=0;i<8;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
return 0;
}