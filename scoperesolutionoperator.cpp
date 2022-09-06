#include<iostream>
using namespace std;
int c=15;
int main()

{int a,b,c;
    cout<<"Enter value of a:"<<endl;
    cin>>a;
    cout<<"Enter value of b:"<<endl;
    cin>>b;
    c=a+b;
    cout<<::c; // ::is scope resolution operator 
    /* ::used to print global value when inside a function*/
}