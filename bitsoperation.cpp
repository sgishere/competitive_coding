#include <bits/stdc++.h>
using namespace std; 

int main(){
    int num;
    cin>>num;
    //convert num into bits
    cout<<num<<"in binary form is";
    for(int i=10;i>=0;i--)
    cout<<((num>>i)&1);  //right shift operator 
    cout<<endl;
    //checking whether ith bit is set or unset
    cout<<"which bit u want to check in this number is set or unset??\n";
    int i;
    cin>>i;
    if(((num)&(1<<i))!=0)
    cout<<i<<"th bit is set"<<endl;
    else 
    cout<<i<<"th bit is not set"<<endl;
    /*setting ith bit
    print binary of this ((num)or(1<<i))

    unsetting ith bit
    print binary of this ((num)&(~(1<<i)))
    ~ is used to reverse all bits 

    toggling any ith bit using XOR operator 
    print binary of this (num^(1<<i));

    couting no. of setbits
    */
   cout<<"No. of bit set in"<<num<<"is"<<__builtin_popcount(num)<<endl;

return 0;
}