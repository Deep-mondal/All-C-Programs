#include<stdio.h>
#include<stdlib.h>
#define size 10
int a[size],f,r;
void dequeue()
{
    if(f==-1)
    {
        printf("\nThe array is empty!nothing to display.");
        return;
    }
    if(f==r)
    {
        f=r=0;
        printf("\nThe array is uni-elemental");
        printf("\nThe deleted element is:%d",a[f]);
        f--;
    }
    else
        {
            printf("\nThe deleted element is:%d",a[f]);
            f++;
        }
}
void enqueue( )
{
    int x;
    if(r==size-1)
    {
        printf("\nThe array is full! can not insert");
    }
    else
    {
        printf("\nEnter the value to insert");
        scanf("%d",&x);
        r++;
        a[r]=x;
    }
}
void menu()
{
    printf("\nEnter your choice by a number:");
    printf("\n\t 1.insert");
    printf("\n\t 2.delete");
    printf("\n\t 3.Display");
    printf("\n\t 4.exit");
}
void display()
{
    int i;
    for(i=f;i<=r;i++)
    {
        printf("%d",a[i]);
    }
}
 int main()
 {
     int n;
   while(1<2)
   {
       menu();
        printf("\nYour choice plaese:");
        scanf("%d",&n);
      // break;
   switch(n)
       {
       case 1: enqueue();
       break;
       case 2: dequeue();
       break;
       case 3: display();
       break;
       case 4: exit(0);
       break;
       default: printf("\nInvalid entry! please put a vaid choice");
       }
   }
       return 0;
 }


