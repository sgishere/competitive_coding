#include <iostream>
using namespace std; 

int main(){
    int arr[]={12,13,14,15,16,8,99,69};
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"size of this array is "<<length;
return 0;
}