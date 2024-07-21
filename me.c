#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
int press,x,y,z:
while (true)
{
    system(cls);
    printf("\nSelect your choice\n1)Addition\2)Substraction\n3)multiplication\n4)division\n5)To exit\nEnter your choice:");
    printf("\nEnter your first value:")
    printf("\nEnter your second value:")
    scanf("%d%d%d",&press,&x,&y);
    if (press==1)
    {
        z=x+y;
        printf("your answer is %d",z);
        getch;     
    }
    else if (press==2)
    {
        z=x-y;
        printf("your answer is %d",z);
        getch;     
    }
    else if (press==3)
    {
        z=x*y;
        printf("your answer is %d",z);
        getch;     
    }
    else if (press==4)
    {
        z=x/y;
        printf("your answer is %d",z);
        getch;     
    }
    else
    {
        exit(0);
    }
}
}
