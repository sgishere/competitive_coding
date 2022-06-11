#include <stdio.h>
#include<stdlib.h>
typedef struct cmplx {
    float real;
    float imag;
} cmplx;

cmplx add(cmplx a, cmplx b);
cmplx substract(cmplx a,cmplx b);
cmplx multiply(cmplx a,cmplx b);
int main() {
    cmplx a, b, addition,substraction,multiplication;

    printf("Enter first complex number: \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &a.real, &a.imag);
    printf("\nEnter second complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &b.real, &b.imag);

    addition = add(a, b);
    substraction=substract(a,b);
    multiplication=multiply(a,b);
    printf("Sum = %.1f + %.1fi\n", addition.real, addition.imag);
    printf("substract = %.1f + %.1fi\n", substraction.real, substraction.imag);
    printf("multiplication = %.1f + %.1fi\n", multiplication.real, multiplication.imag);
    return 0;
}

cmplx add(cmplx a, cmplx b) {
    cmplx ans1;
    ans1.real = a.real + b.real;
    ans1.imag = a.imag + b.imag;
    return (ans1);
}
cmplx substract(cmplx a,cmplx b){
	cmplx ans2;
	ans2.real = a.real - b.real;
    ans2.imag = a.imag - b.imag;
    return (ans2);
}
cmplx multiply(cmplx a,cmplx b){
	cmplx ans3;
	ans3.real=a.real*b.real -a.imag*b.imag;
	ans3.imag =a.imag*b.real +a.real*b.imag;
	return (ans3);
}