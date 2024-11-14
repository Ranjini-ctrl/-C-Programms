//multi2dimen.c
//to print & display multiply the 2 dimensional matrix
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,no1[100][100],no2[100][100],no3[100][100],r1,r2,c1,c2;
    clrscr();
    a:
    printf("\nEnter the value of rows and column for 1st matrix:");
    scanf("%d,%d",&r1,&c1);
    printf("Enter the value of rows and column for 2nd matrix:");
    scanf("%d,%d",&r2,&c2);
    if(c1!=r2)
    {
        printf("You must be put  the same values for Rows and Colums!");
        goto a;
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
        printf("Enter the number for 1st matrix:");
        scanf("%d",&no1[i][j]);
        }
    } 
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
        printf("%d\t",no1[i][j]);
        } 
    printf("\n");
    }
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
        printf("Enter the number for 2nd matrix:");
        scanf("%d",&no2[i][j]);
        }
    }   
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
        printf("%d\t",no2[i][j]);
        } 
    printf("\n");
    }
    printf("\t**MULTIPLY THE MATRIX**\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            no3[i][j]=0;
        } 
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c2;k++)
            {
                no3[i][j]+=no1[j][j]*no2[i][i];
            }
        } 
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
        printf("%d\t",no3[i][j]);
        } 
    printf("\n");
    }
    getch();
    return 0;
}
