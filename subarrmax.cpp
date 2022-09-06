#include <iostream>
using namespace std; 

int main(){
    int arr[100];
    int n;
    cout<<"Enter size of array";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        arr[i]=num;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<=i+1;j++)
        {
            int max=arr[j];
            if(arr[j+1]>arr[j])
            {
                max=arr[j+1];
                cout<<max;
            }
        }
        
    }

return 0;
}