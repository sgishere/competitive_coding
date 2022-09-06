#include <bits/stdc++.h>
using namespace std; 

int main(){
   
    // int arr[4];
    int max=0;
    for(int i=0;i<4;i++)
    {int n;
        cin>>n;
        // arr[i]=n;
        if (n>max){
            
            max=n;
        }
    }
    cout<<max;

return 0;
}