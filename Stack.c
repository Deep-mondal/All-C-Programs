 /********************Data structur:stag*******************/

#include<stdio.h>
#include<stdlib.h>
#define size 5 
 int a[size],top;//Declaration of a global variable
 void menu()//menu function for displaying the menu
 {
    printf("\nyour Choices are here:\n");
    printf("\t\t\t\t1.push\n");
    printf("\t\t\t\t2.pop\n");
    printf("\t\t\t\t3.display\n");
    printf("\t\t\t\t4.exit\n");
 }
 void push(int x)//for push operation
 {
     
    if(top==size-1)
    {
        printf("The stag is full,it  can't be push");
        return;
    }
    top++;
    a[top]=x;
 }
 void pop()//for pop operation
 {
    if(top==-1)
    {
        printf("\nThe stag is empty,It can't be poped");
        return;
    }
    top--;
    printf("\n The poped value is%d",a[top]);
 }
 void display()//display the stag
 {
     if(top==-1)
    {
        printf("\nThe stag is empty,It can't be displayed");
        return;
    }
    int i=0;
    while(i<=top)
    {
        printf("\t%d\n",a[i]);
        i++;
    }
 }
 int main()
 {
    int choice,n;//local variable
    top=-1;
     //menu();
   while(1)//infinite loop
   {
       menu();
    printf("\nEnter a choice by number:"); 
    scanf("%d",&choice); 
     
    switch(choice)
    {
        case 1:if(top!=-1)
        {
        printf("Enter a element:");
        scanf("%d",&n);
        }
        push(n);
        break;
        case 2: pop();
        break;
        case 3: display();
        break;
        case 4:exit(0);
        break;
        default: printf("Invalid choice!");
    }//End os switch case
   }//End of infinite loop
   return 0;
 }