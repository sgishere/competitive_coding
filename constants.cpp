#include<iostream>
using namespace std;
int main()
{
    /*int a=5;
    cout<<"value of a is "<<a<<endl;
    a=7;
    cout<<"Value of a is now "<<a<<endl;
    return 0;*/
//in above code value of a is changed but to restrict it from changing we can use const function.
const int a=6;
cout<<"value of a is "<<a<<endl;
//a=8; this will give error as a is constant now and cannot be reeditted.
cout<<"VAlue of a is now"<<a<<endl;
return 0;


}