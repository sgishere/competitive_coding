#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Class{
    char *description;
    char *time;
    char *date;
} Class;

struct Student{
    char* name;
    double gpa;
    char* major;

    struct {
        char* street_address;
        char* city;
        char* state;
        int zip;
    } address;

    struct {
        Class class[7];
    } class_schedule;
}s;
int main(){
    int n;
    printf("Enter number of students:");
    scanf("%lf",&n);
    for(int i=0;i<n;i++)
    {
    printf("ENTER DETAILS FOR STUDENT %d",i);
    char x[20];
    scanf("%s",&x);
    struct Student x;
    printf("Enter name:");
    scanf("%s",x.name);
    printf("Enter roll number:");
    scanf("%lf",x.gpa);
    printf("Enter Major:");
    scanf("%s",x.major);
    printf("Enter street address:");
    scanf("%s",x.address.street_address);
    printf("Enter city:");
    scanf("%s",x.address.city);
    printf("Enter state:");
    scanf("%s",x.address.state);
    printf("Enter zip code:");
    scanf("%d",x.address.zip);
    printf("Enter name of class 1:");
    scanf("%s",x.class_schedule.class[1].description);
    printf("Enter timing of class 1");
    scanf("%s",x.class_schedule.class[1].time);
    printf("Enter date of class 1");
    scanf("%s",x.class_schedule.class[1].date);
    printf("Enter name of class 2:");
    scanf("%s",x.class_schedule.class[2].description);
    printf("Enter timing of class 2");
    scanf("%s",x.class_schedule.class[2].time);
    printf("Enter date of class 2");
    scanf("%s",x.class_schedule.class[2].date);
        printf("Enter name of class 3:");
    scanf("%s",x.class_schedule.class[3].description);
    printf("Enter timing of class 3:");
    scanf("%s",x.class_schedule.class[3].time);
    printf("Enter date of class 3");
    scanf("%s",x.class_schedule.class[3].date);
    }
    printf("*DETAILS OF STUDENTS*");
        for(int i=0;i<n;i++)
    {
    printf("%s\n",x.name);
    printf("%lf\n",x.gpa);
    printf("%s\n",x.major);
    printf("%s, %s, %s, %d.\n",s[i].address.street_address,s[i].address.city,s[i].address.state,s[i].address.zip);
    }
	return 0;
}