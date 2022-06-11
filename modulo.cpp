#include <bits/stdc++.h>
using namespace std; 

int main(){
    //sometimes we need to calculate values which cannot be defined in our 
    //dataypes range
    //so we use modulo there in contest
    int M=41; //value of M is given in contests
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int fact=1;
        //say we need to print factorial of 21 but it is too large
        //to be calculated so we use % there
        // (a+b)%M=((a%M)+(b%M))%M
        // (a*b)%M=((a%M)*(b%M))%M
        // (a-b)%M=((a%M)-(b%M)+M)%M
        // (a/b)%M=((a%M)*((b^-1)%M))%M
        for(int i=2;i<=N;i++)
        {
            fact=(fact*i)%M;
        }
        cout<<fact<<endl;
    }
return 0;
}