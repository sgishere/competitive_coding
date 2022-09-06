#include<iostream>
using namespace std;

typedef struct library{
    int bookno;
    float bookprice;
    char bookalpha;
    int pages;
}lib;
int main()
{
    lib fiftyshades;
    fiftyshades.bookalpha='f';
    fiftyshades.bookno=1;
    fiftyshades.bookprice=252;
    fiftyshades.pages=678;
    cout<<"Hi"<<endl;
    cout<<"No. of pages in fifty shades book is"<<fiftyshades.pages<<endl;
    return 0;
}