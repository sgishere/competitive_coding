#include <bits/stdc++.h>
using namespace std; 

int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int X;
        cin>>X; //X is total prize
        int carlsenpts=0;
        int chefpts=0;
        string points;
        cin>>points;
        for(int i=0;i<points.length();i++)
        {
            if(points[i]=='C')
            {
                carlsenpts+=2;
            }
            else if(points[i]=='N')
            {
               
                chefpts+=2;
            }
            else if(points[i]=='D'){
                chefpts+=1;
                carlsenpts+=1;
            }
        }
        cout<<"carlsenpts is"<<carlsenpts<<endl;
        cout<<"chefpts is"<<chefpts<<endl;
        if(carlsenpts>chefpts)
        {
            cout<<60*X<<endl;
        }
        else if(carlsenpts<chefpts)
        {
            cout<<40*X<<endl;
        }
        else{
            cout<<55*X<<endl;
        }

    }
return 0;
}