//REV.c
#include <stdio.h>
int main()
{
   int num, rev ;
   printf("Enter a number: ");
   scanf("%d", &num);
   while (num > 0)
  {
     rev = rev * 10 + num % 10;
     num=num/10;
  }
  printf("Reversed number is: %d\n", rev);
  if(num<0||(num % 10 == 0 && num!=0))
  {
    printf("false");
  }
  else if(num==num)
  {
    printf("true");
  }
  else
  {
    printf("false");
  }
  return 0;
}
