#include <bits/stdc++.h>
using namespace std; 

int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int a,b;
        cin>>a>>b;
        int pointss=0;
        int pointsg=0;
        for(int i=0;i<31;i++)
        {
            if(a&(1<<i))
            {
                if(b&(1<<i))
                    pointss+=i;
                else
                    pointsg+=i;
            }
             else if (b&(1<<i))
            {
                pointsg+=i;
            }
            else{continue;
            }
        }
        if(pointss>pointsg)
        {
            cout<<"SHANTANU"<<endl;
            cout<<pointss-pointsg<<endl;
        }
        else if(pointss<pointsg)
        {
            cout<<"GAUTAM"<<endl;
            cout<<pointsg-pointss<<endl;
        }
        else{
            cout<<"DRAW"<<endl;
            cout<<0<<endl;
        }
        
    }
return 0;
}