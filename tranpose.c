//transpose.c
//to transpose the matrix
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,r,c,no[100][100];
    printf("Enter the value of rows and column:");
    scanf("%d,%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        printf("Enter the number:");
        scanf("%d",&no[i][j]);
        }
    } 
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        printf("%d\t",no[i][j]);
        } 
    printf("\n");
    } 
    printf("***The transpose***\n");
    for(j=0;j<c;j++)
    {
        for(i=0;i<r;i++)
        {
            printf("%d\t",no[i][j]);
        } 
    printf("\n");
    }
    getch();
    return 0;
}
