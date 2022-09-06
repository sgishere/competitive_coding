#include <iostream>
using namespace std; 
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=4,y=6;
    cout<<"x is"<<x<<"y is"<<y<<endl;
    swap(x,y);
    cout<<"x is"<<x<<"y is"<<y<<endl;
return 0;
}