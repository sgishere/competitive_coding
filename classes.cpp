#include <bits/stdc++.h>
using namespace std; 
class employee
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a,int b,int c);
    void getdata()
    {
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
        cout<<"Value of c is "<<c<<endl;
        cout<<"Value of d is "<<d<<endl;
        cout<<"Value of e is "<<e<<endl;
    }

};
void employee :: setdata(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    employee sagar;
    sagar.setdata(1,2,4);
    sagar.d=69;
    sagar.e=79;
    sagar.getdata();
return 0;
}