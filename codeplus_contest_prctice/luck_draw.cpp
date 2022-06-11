#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std; 
int main(){
    cout<<"How many rounds you want to play??"<<endl;
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {   cout<<"ROUND "<<i+1<<"BEGINS "<<endl;
        int arr[6];
        for(int i=0;i<6;i++)
        {
            cout<<"PLAYER "<<i+1<<" Enter any number in range (0,99) both included\n";
            cin>>arr[i];
        }
        int x=rand()%100;
        int diff=INT_MAX;
        int index=0;
        for(int i=0;i<6;i++)
        {
            if(abs(arr[i]-x)<diff)
            {diff=abs(arr[i]-x);
            index=i+1;}
        }
        cout<<"RANDOM NUMBER WAS "<<x<<endl;
        cout<<"AND WINNER OF THIS ROUND IS PLAYER "<<index<<endl;
    }


return 0;
}