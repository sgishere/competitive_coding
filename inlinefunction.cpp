#include<iostream>
using namespace std;
inline int product(int x,int y)
{
    return x*y;
}
int main(){
    int a,b;
    cout<<"Enter a"<<endl;
    cin>>a;
    cout<<"Enter b"<<endl;
    cin>>b; //inline is useful when we run a function multiple times to save cache memory.
    cout<<"Product is "<<product(a,b)<<endl;
    cout<<"Product is "<<product(a,b)<<endl;
    cout<<"Product is "<<product(a,b)<<endl;
    cout<<"Product is "<<product(a,b)<<endl;
    cout<<"Product is "<<product(a,b)<<endl;
    cout<<"Product is "<<product(a,b)<<endl;
    cout<<"Product is "<<product(a,b)<<endl;
    cout<<"Product is "<<product(a,b)<<endl;
    cout<<"Product is "<<product(a,b)<<endl;
    cout<<"Product is "<<product(a,b)<<endl;
}