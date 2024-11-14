//swap.c
#include<stdio.h>
//function to swap two integer using pointers
void swap(int *n1,int *n2)
{
 int temp;
 temp = *n1;
 *n1 = *n2;
 *n2 = temp;
}
int main()
{
 int n1,n2;
 //asking the user to input two integers
 printf("Enter two integer : ");
 scanf("%d %d",&n1,&n2);
 //display the values before swapping
 printf("Before swap : %d %d\n",n1,n2);
 //call the swap function
 swap(&n1,&n2);
 //display the values after swapping
 printf("After swap : %d %d",n1,n2);
 return 0;
}
