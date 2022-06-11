#include <bits/stdc++.h>
using namespace std; 

int main(){
    //upper case to lower case using binary;
    // Upper case letters have 5th bit unset
    //Lower case letters have 5th bit set
    // now to convert upper to lower we set the 5th bet
    // using char('A'|(1<<5))   
    // we know char value of 1<<5 is ' '
    cout<<char('A' | ' ');cout<<endl; // A to a 
    //lower case to upper case using binary;
    //we need to unset the 5th binary digit
    // we use ('a'&~(1<<5));
    //and another method is to take and with '_'
    // 'a'& '_'
    cout<<char('a'&'_');cout<<endl;

return 0;
}