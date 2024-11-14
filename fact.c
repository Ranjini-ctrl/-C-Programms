//fact.c
//to find the factorial to the given number until the user says no
#include <stdio.h>
int main()
{
 int n, i;
 char choice;
 do
 {
 int factorial = 1; // Initialize factorial variable for each iteration
 printf("Enter a number: ");
 scanf("%d", &n);
 for(i = 1; i <= n; i++)
 {
 factorial *= i;
 }
 printf("Factorial of %d is %d\n", n, factorial);
 printf("Do you want to calculate another factorial? (y/n): ");
 scanf(" %c", &choice);
 // Read the user's choice (note the space before %c to consume any newline)
 } while(choice == 'y' || choice == 'Y');
 return 0;
}
