//There are many operators but important are 4 rightnow
//Arithmetic,Logical,Comparsion,Assignment operator
#include<iostream>
using namespace std;
int main()
{int a,b;
    cout<<"Enter value of a"<<endl;
    cin>>a ;
    cout<<"Enter value of b"<<endl;
    cin>>b ;

  // arithemtic operators(+-/* (a++,a--,++a,--a))
  cout<<"Sum of a and b is"<<a+b<<endl;
  cout<<"Product of a and b is"<<a*b<<endl;
  cout<<"Difference of a and b is"<<a-b<<endl;
  cout<<"Division of a and b is"<<a/b<<endl;
  cout<<"Increment print operator"<<++a<<endl; //it will first increase value thn print
  cout<<"Decerement print operator"<<--a<<endl;//it will first decrease value then print
  cout<<"print increment operator"<<a++<<endl;//it will print then increase
  cout<<"Print decrement operator"<<a--<<endl;//it will print then decrease
 //comparasion operators(==,>=,<=,<,>)
 cout<<"Is a=b?"<<(a==b)<<endl;
//Assignment operator(=)
 cout<<"Is a greater than or equal to b"<<(a>=b)<<endl;
 cout<<"Is a less than or equal to b"<<(a<=b)<<endl;
 cout<<"Is a less than b"<<(a<b)<<endl;
 cout<<"Is a greater than b"<<(a>b)<<endl;
 //Logical operators(and&&,or||,not !)
cout<<((a==b)&&(a>=b))<<endl;//Both must be true
cout<<((a==b)||(a>=b))<<endl;//If any one is true output is true
cout<<(!(a==b))<<endl;//opposite of original output
int c=4; //=is assignment operator.
return 0;
}