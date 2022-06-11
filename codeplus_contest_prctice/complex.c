#include<stdio.h>
struct complex add(struct complex a,struct complex b)
{
    struct complex tmp;
    tmp.real=a.real+b.real;
    tmp.imag=a.imag+b.imag;
    return (tmp);
}
int main()
{
    struct complex 
    {
        float real;
        float cmplex;
    }a,b,c;
    scanf("%f%f",&a.real,&a.cmplex);
    scanf("%f%f",&b.real,&b.cmplex);
    // c.real=a.real+b.real;
    // c.cmplex=a.cmplex+b.cmplex;
    // printf("\n%.2fi + %.2fj",c.real,c.cmplex);

    struct complex c=struct complex add(a,b);
    printf("\n%.2fi + %.2fj",tmp.real,tmp.complex);
    return 0;
}