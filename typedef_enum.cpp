#include<stdio.h>

typedef enum
{
    INDIA,
    USA,
    JAPAN,
    AUS,
    UK
}country;

typedef struct
{
    char c_name[30];
    int c_total_students;
    int c_total_branches;
    char c_university[20];
    country co;
}college;

int main()
{
    college college_details = { "Engineering college", 322, 6, "VTU", INDIA };
    college college_details1 = {};
    college_details1 = college_details;
    printf("****COLLEGE DETAILS*****\n");
    printf("Name: %s\n", college_details1.c_name);
    printf("Total Students: %d\n", college_details1.c_total_students);
    printf("TOtal Branches: %d\n", college_details1.c_total_branches);
    printf("University: %s\n", college_details1.c_university);
    printf("Country: %d\n", college_details.co);
}