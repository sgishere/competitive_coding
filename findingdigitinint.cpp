#include <bits/stdc++.h>
using namespace std; 
//THIS IS BASIC STYLE OF GOING THROUGH ELEMENTS OF A INTEGER.
int main(){
    int num;
    cin>>num;
    int count=0;
    while(num!=0)
    {
        if(num%10==4)
        {
            count+=1;
        }
        num/=10;
    }
    cout<<count;
return 0;
}