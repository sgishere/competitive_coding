#include <bits/stdc++.h>
using namespace std; 

int main(){
    //Multiplying number by 2 use num<<1
    //Dividing number by 2 use num>>1
    int num;
    cin>>num;
    if(num & num-1)
    cout<<"No not power of 2 ";
    else
    cout<<"Yes power of 2";
return 0;
}