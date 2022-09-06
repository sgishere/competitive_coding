//for operator precedence check cppreference.com 
#include<iostream>
using namespace std;
int main()
{
    int a=6,b=12;
  int c=a*5+b; //this will be evaluated as ((a*5)+b)
  cout<<c;
  return 0;
}
// if c=a*b+5-26+98 
//this will be evaluated as ((((a*b)+5)-26)+98) 
//where precedence is same follow associavity.
// https://en.cppreference.com/w/cpp/language/operator_precedence