#include <bits/stdc++.h>
using namespace std; 

int main(){
    string S;
    cin>>S;
    int count=0;
    for(int i=0;i<S.length();i++)
    {
        if(S[i]==S[S.length()-i-1])
        {
            count+=1;
        }
    }
    if(count==S.length())
    {
        cout<<"Yes string is palindrome";
    }
    else{
        cout<<"String is not a palindrome";
    }
return 0;
}