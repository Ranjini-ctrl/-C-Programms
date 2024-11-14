//sortnames.c
//to sort the names
#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    int i,j,n;
    char nm[100][100],temp[50];
    printf("How many no u want:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the name:");
        scanf("%s",nm[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(nm[i],nm[j])>0)
            {
               strcpy(temp,nm[i]);
               strcpy(nm[i],nm[j]);
               strcpy(nm[j],temp);
            }
        }
    }
    printf("***The sorted values***");
    for(i=0;i<n;i++)
    {
        printf("\n%s\n",nm[i]);
    }
    getch();
    return 0;
}
