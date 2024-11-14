#include<stdio.h>
// Defining a structure 'student' to store student details
struct student
{
 int rno;
 char name[20];
 long int fees;
}student;
int main()
{
 // Declaring a structure variable 's' of type 'student'
 struct student s;

 // Prompting user to enter student details
 printf("Enter student name : ");
 scanf("%s",s.name);
 printf("Enter student roll number : ");
 scanf("%d",&s.rno);
 printf("Enter student fees : ");
 scanf("%li",&s.fees);
 // Displaying the output
 printf("\nHi %s\n",s.name);
 printf("Your roll number is %d\n",s.rno);
 printf("Your fees is %li",s.fees);
 return 0;
}
