//perfect.c
//to find the perfect nos
#include<stdio.h>
int isperfect (int no)
{
    int i,check=0;
    for (i = 1; i < no; i++)
    {
        if (no % i == 0)
        check += i;
    }
    return check;
}
int main()
{
    int no;
    printf("Enter a number :");
    scanf("%d",&no);
    if (isperfect(no) == no)
        printf("%d is a perfect number.",no);
    else
        printf("%d is not a perfect number.",no);
    return 0;
}
