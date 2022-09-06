#include <iostream>
using namespace std; 

int main(){
    string str="Hello";
    string str2="                ";
    cout<<str.size()<<endl;
    for(int i=0;i<(str.size());i++)
    {
        if(i%2!=0)
        {
            str2[i]=str[i];
        }
        else{
            str2[i]='*';
        }
    }
    cout<<str2;
return 0;
}