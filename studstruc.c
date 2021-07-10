#include <stdio.h>
typedef struct student
{
    int rollno;
    char name[100];
    char sect[100];
    char dept[100];
    double fees;
    double results;
}Stud;

int main() 
{
  int i;
  // declaring the students
  Stud student1, student2;
// reading the info of the students
    printf("\nEnter roll number of student 1: ");
    scanf("%d",&student1.rollno);

    printf("\nEnter the name of student 1 : ");
    scanf("%s",&student1.name);

    printf("\nEnter the section of student 1 : ");
    scanf("%s",&student1.sect);

    printf("\nEnter the department of student 1 : ");
    scanf("%s",&student1.dept);

    printf("\nEnter the fees of student 1 : ");
    scanf("%lf",&student1.fees);

    printf("\nEnter the results of student 1 : ");
    scanf("%lf",&student1.results);   

    printf("\nEnter roll number of student 2: ");
    scanf("%d",&student2.rollno);

    printf("\nEnter the name of student 2 : ");
    scanf("%s",&student2.name);

    printf("\nEnter the section of student 2 : ");
    scanf("%s",&student2.sect);

    printf("\nEnter the department of student 2 : ");
    scanf("%s",&student2.dept);

    printf("\nEnter the fees of student 2 : ");
    scanf("%lf",&student2.fees);

    printf("\nEnter the results of student 2 : ");
    scanf("%lf",&student2.results);  

//printing the student with the highest result
    if(student1.results > student2.results)
    {
     printf("\nstudent 1 has the highest result")
     printf("\nEnter roll number of student 1: %d", student1.rollno);
     printf("\nEnter the name of student 1 : %s", student1.name);
     printf("\nEnter the section of student 1 : %s", student1.sect);
     printf("\nEnter the department of student 1 : %s", student1.dept);
     printf("\nEnter the fees of student 1 : %lf", student1.fees);
     printf("\nEnter the results of student 1 : %lf", student1.results);
    }
    else
    {
     printf("\nstudent 2 has the highest result")
     printf("\nEnter roll number of student 2: %d", student2.rollno);
     printf("\nEnter the name of student 2 : %s", student2.name);
     printf("\nEnter the section of student 2 : %s", student2.sect);
     printf("\nEnter the department of student 2 : %s", student2.dept);
     printf("\nEnter the fees of student 2 : %lf", student2.fees);
     printf("\nEnter the results of student 2 : %lf", student2.results);
    }

  return 0;
}