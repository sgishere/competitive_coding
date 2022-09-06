#include<stdio.h>
int main(){
    float u,p,r;
    scanf("%f",&u);
    if(u>=250){
        p=((1.50)*(u-250))+((1.20)*(100))+((0.75)*(100))+(50*(0.5));
       r=(p+((0.2)*p));

    }
    else if(u>=150 && u<250){
        p=((1.20)*(u-150))+((0.75)*(100))+(50*(0.5));
        r=(p+((0.2)*p));
    }
    else if(u>50 && u<150){
        p=((0.75)*(u-50))+((0.5)*50);
        r=(p+((0.2)*p));

    }
    else {
        p=((0.50)*u);
        r=(p+((0.2)*p));
    }
    printf("the electricity bill is:%f",r);
    return 0;

}