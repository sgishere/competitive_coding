//Question: Define a structure type to represent a common fraction. Write a program that gets a
 //fraction and displays both the fraction and the fraction reduced to lowest terms using the 
//following 
//code fragment:
//frac = get_fraction();
//print_fraction(frac);
//printf(" = "); print_fraction(reduce_fraction(frac));

#include <stdio.h>

typedef struct {
    int numerator;
    int denumerator;
} fraction;

void print_fraction(fraction frac);

fraction reduce_fraction(fraction frac);

fraction get_fraction() {
    fraction fr;
    printf("Enter numerator: ");
    scanf("%d", &(fr.numerator));
    printf("Enter denominator: ");
    scanf("%d", &(fr.denumerator));
    return fr;
}

int main() {
    fraction frac = get_fraction();
    print_fraction( frac);
    printf(" = ");
    print_fraction( reduce_fraction(frac));
    return 0;
}

fraction reduce_fraction(fraction frac) {
    int i;
    fraction result;
    int gcd;
    for(i=1; i <= frac.numerator && i <= frac.denumerator; ++i)
    {
        
        if(frac.numerator%i==0 && frac.denumerator%i==0)
            gcd = i;
    }
    result.numerator = frac.numerator/gcd;
    result.denumerator = frac.denumerator/gcd;

    return result;
}

void print_fraction(fraction frac) {
    printf("%d/%d", frac.numerator, frac.denumerator);
}