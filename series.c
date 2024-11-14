//to find the sum of the series
#include <stdio.h>
int main()
{
 int n, sum = 0, i = 1;

 printf("Enter the number of terms: ");
 scanf("%d", &n);

 while(i <= n)
 {
 sum += i;
 i++;
 }

 printf("Sum of the series: %d\n", sum);

 return 0;
}
