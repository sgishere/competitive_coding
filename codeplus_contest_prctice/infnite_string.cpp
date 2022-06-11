#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s=" ";
    for(int i=1;i<=26;i++)
    {   int x=i*i*i;
        while(x--)
        {
            s.push_back('a'+i-1);
        }
    }

    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        int num=x%123201;
        string str;
        int sum=0;
        int sumx=0;
        for(int i=1;i<=26;i++)
        {   if(num==0)
            {
                cout<<'z'<<endl;
                break;
            }
            else{
            sum+=i*i*i;
            sumx+=(i-1)*(i-1)*(i-1);
            if((num>sumx) and (num<=sum) )
            cout<<char('a'+i-1);
            }
        }
    }
return 0;
}