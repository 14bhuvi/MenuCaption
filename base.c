#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
int press:
while (true)
{
    system(cls);
    printf("\nSelect your choice\n1)message1\2)message2\n3)to exit\nEnter your choice:");
    scanf("%d",&press);
    if (press==1)
    {
        printf("message1");
        getch;     
    }
    else if (press==2)
    {
        printf("message2",);
        getch;     
    }
  else
    {
      exit(0);
    }
}
}
