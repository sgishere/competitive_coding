#include <iostream>
using namespace std; 

int main(){
    int n1=1,n2=1,num,nextterm=0;
    cout<<"How many terms u want";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        if(i==1)
        {
            cout<<n1<<" ";
            continue;
        }
        if(i==2)
        {
            cout<<n2<<" ";
            continue;
        }
        else
        {
            nextterm=n1+n2;
            n1=n2;
            n2=nextterm;
            cout<<nextterm<<" ";
        }
    }
return 0;
}