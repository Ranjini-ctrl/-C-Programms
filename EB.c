//242210-Ranjini[P35]
//Eb_35.c
//to find out the Eb calculation
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int id,pu,cu,u,amt;
    char name[25];
    char type[20];
    clrscr();
    printf("Enter customer name:");
    scanf("%s",name);
    printf("Enter customer id:");
    scanf("%d",&id);
    printf("Enter current month unit:");
    scanf("%d",&cu);
    printf("Enter previous month unit:");
    scanf("%d",&pu);
    u=cu-pu;
    printf("Enter your Bill type[Business\Home]:");
    scanf("%s",type);
    if(strcmp(type,"Business")==0)
    {
        if(u>=1000)
        {
            amt=u*15;
        }
        else if(u>=800)
        {
            amt=u*10;
        }
        else 
        {
            amt=u*5;
        }
    }
    else if(strcmp(type,"Home")==0)
    {
        if(u>=1000)
        {
            amt=u*10;
        }
        else if(u>=800)
        {
            amt=u*7;
        }
        else
        {
            amt=u*5;
        }
    }    
    printf("***EB***");
    printf("\nHi %s",name);
    printf("\nYour type is %s",type);
    printf("\nYour unit is %d",u);
    printf("\nYou have to pay Rs %d",amt);
    getch();
}
