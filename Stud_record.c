/* Design a structure ‘student_record’ to store student details like name, SAP ID, enrollment number, date of registration and date of birth. 
  The element date of registration is defined using another structure ‘date’ to store date details like day, month, and year. 
  Get data of ‘n’ students and then print the entered values. Use concept of Nested structures and Array of Structures. */

#include<stdio.h>

typedef struct Date        //structure
{
    int day, month, year;
} date;


typedef struct Student     //second structure
{
    char name[30], sap_id[15], enrol_no[15];
    date regis_date, birth_date;
} student;

int main( )
{
    int n;
    printf("Enter number of students - ");
    scanf("%d", &n);
    student stu[n];

    printf("Enter elements of array - ");
    for(int i=0; i<n; i++)
 {
        printf("\n------------------------");
        printf("\nFor student no %d -", i+1);
        printf("\nEnter name of student - ");
        scanf("%s", &stu[i].name);

        printf("Enter SAP ID - ");
        scanf("%s", &stu[i].sap_id);
   
        printf("Enter Enrollment no - ");
        scanf("%s", &stu[i].enrol_no);
     
        printf("Enter Date of Birth (dd mm yyyy) - ");
        scanf("%d%d%d", &stu[i].birth_date.day, &stu[i].birth_date.month, &stu[i].birth_date.year);
        
        printf("Enter Date of Registration (dd mm yyyy) - ");
        scanf("%d%d%d", &stu[i].regis_date.day, &stu[i].regis_date.month, &stu[i].regis_date.year);
    }

    for(int i=0; i<n; i++)
    {
        printf("\n----------------");
        printf("\nEnter name of student - %s", &stu[i].name);
        printf("\nEnter SAP ID          - %s", &stu[i].sap_id);
        printf("\nEnrollment no         - %s", &stu[i].enrol_no);
        printf("\nDate of Birth         - %d/%d/%d", stu[i].birth_date.day, stu[i].birth_date.month, stu[i].birth_date.year);
        printf("\nDate of Registration  - %d/%d/%d", stu[i].regis_date.day, stu[i].regis_date.month, stu[i].regis_date.year);
    }
}
