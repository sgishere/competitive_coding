#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


void occ_of_ch(string str,char ch)
{   int count=0;
    for(int i=0;i<str.length();i++)
    {
     if(str[i]==ch)
     {
         count+=1;
         
     }
     else{
         continue;
     }
    }
    cout<<ch<<":"<<count<<endl;
}
void sortString(string &str)
{
   sort(str.begin(), str.end());
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str;
    cin>>str;
    //converting string all into small to compare easily
    for(int i=0;i<str.length();i++)
    {
        if(int(str[i])>64 && int(str[i])<91)
        {
            str[i]=char(int(str[i])+32);
        }
    }
    //sorting the string to print elemnts in alphabetical order
    sortString(str);
    cout<<str<<endl;

    for(int i=0;i<str.length();i++)
    {
        char ch;
        ch=str[i];
        occ_of_ch(str,ch);
    } 
    return 0;
}