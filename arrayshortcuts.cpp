#include <bits/stdc++.h>
using namespace std; 

int main(){
    int arr[]={3,2,6,5,3,5,7,8,10,0,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=*max_element(arr,arr+n);
    cout<<"Size of this array is:"<<n<<endl;
    cout<<"Maximum element in  this array is :"<<max<<endl;
    sort(arr,arr+n);
    cout<<"Array after sorting is:\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}