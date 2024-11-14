//to find the grade of the student
#include <stdio.h>
int main()
{
 int score;
 //accept the score from the user
 a:printf("Enter your score: ");
 scanf("%d", &score);

 if (score > 100)
 {
 printf("Invalid score. Please enter a score between 0 and 100.\n");
 goto a;
 }
 else if (score >= 90)
 printf("Grade: A\n");
 else if (score >= 80)
 printf("Grade: B\n");
 else if (score >= 70)
 printf("Grade: C\n");
 else if (score >= 60)
 printf("Grade: D\n");
 else if (score >= 50)
 printf("Grade: E\n");
 else if (score >= 0)
 printf("Grade: F\n");

 return 0;
}
