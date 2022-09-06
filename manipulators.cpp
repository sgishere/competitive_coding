//Two main manipulators are (i) <<endl  (ii) setw() (it is in iomanip headerfile)
#include<iostream>
#include<iomanip> //we will use setw() function which is used for right justifying.
using namespace std;
int main()
{
int a=6;
cout<<"value of a without setw is "<<a<<endl;
cout<<"value of a with setw is "<<setw(8)<<a<<endl;
return 0;
}