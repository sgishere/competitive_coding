//Question2-Define a data structure to store the following student data: gpa, major, 
// address (consisting of street address, city, state, zip), and class schedule 
// (consisting of up to six class records, each of which has description, time, and days components).
//  Define whatever data types are needed. Display the data related to each student.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Class{
    char *description;
    char *time;
    char *date;
} Class;

typedef struct Student{
    char *name;
    double gpa;
    char *major;

    struct {
        char *street_address;
        char *city;
        char *state;
        int zip;
    } address;

    struct {
        Class class[7];
    } class_schedule;
}Student;

int main(){

    Student s1;
    s1.name="Sagar Gupta";
    s1.gpa=9.0;
    s1.major="IT";


    s1.address.street_address="Supertech Eco village-1";
    s1.address.city="Noida";
    s1.address.state="Uttar Pradesh";
    s1.address.zip=201306;

    s1.class_schedule.class[1].description="POM class";
    s1.class_schedule.class[1].time="11am to 1am";
    s1.class_schedule.class[1].date="Evert Friday";

    s1.class_schedule.class[2].description="Phy class";
    s1.class_schedule.class[2].time="1 pm to 3pm";
    s1.class_schedule.class[2].date="Every Monday";

    s1.class_schedule.class[3].description="LAL class";
    s1.class_schedule.class[3].time="1pm to 3pm";
    s1.class_schedule.class[3].date="Every Tuesday";

    s1.class_schedule.class[3].description="ITP class";
    s1.class_schedule.class[3].time="3pm to 5pm";
    s1.class_schedule.class[3].date="Every Wednesday";

    //Printing details of student
    printf("%s\n",s1.name);
    printf("%lf\n",s1.gpa);
    printf("%s\n",s1.major);
    printf("%s, %s, %s, %d.\n",s1.address.street_address,s1.address.city,s1.address.state,s1.address.zip);

	return 0;
}