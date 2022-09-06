#include<iostream>
using namespace std;
int sum(int a,int b); // this is function prototype.
void print();
int main()
{int num1,num2;
    cout<<"Enter value of num1 ";
    cin>>num1;
    cout<<"Enter value of num2 ";
    cin>>num2;
    cout<<"Sum of these numbers is "<<sum(num1,num2); // num1 num2 are actual parameters.
    print();
    return 0;
}
int sum(int a,int b) // int a and int b are formal parameters.
{
    int c=a+b;
    return c;
}
void print()
{
    cout<<"\nThis is how u create a void function";
}
//we have to declare all the functions above main functions.
//if we declare any function below main function then to run program we hv to write 
// beginning of function *type functionname(formal parameters);* above main
// to give hope to c++ that function is declared somewhere in the program.
// and all this is known as function prototype.
