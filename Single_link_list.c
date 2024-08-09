#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int x;
    struct node *next;
}node;

node *head='\0';

void creat();
void display();
void insertion();
void deletion();
void take_per();
void menu();
int main()
{
    int ch;
    char a;
    
    while(printf("\nHello world"))
    {
         menu();
         scanf("%d",&ch);
         switch(ch)
         {
            case 1:creat();break;
            case 2:insertion();break;
            case 3:deletion();break;
            case 4: display();break;
            case 5: display();break;
            case 6: exit(0);break;
            default:printf("\nInvalid Entery");

         }
    } 
    return 0;
}
void menu()
{
        printf("=======Menu======");
         printf("\n1.Creat");
         printf("\n2.Display");
         printf("\n3.Insertion");
         printf("\n4.Deletion");
         printf("\n5.Exit");
         printf("\nEnter your choice by number");
}
void creat()
{
    node *in,*d;
    int a;char b;

    if(head!='\0')
    {
        printf("\nList is already created");
        return;
    }
    else{
    do
    {
      printf("\nEnter a value");
      scanf("%d",&a);
      d->x=a;
      d->next='\0';
      if(head=='\0')
      {
        head=d;
        in=d;
      }
      else
      {
        in->next=d;
        in=d;
      }
      printf("\nContinue?");
      a=getchar();
      fflush(stdin);
    } while (a=='Y'||a=='y');
    }    
}
void display()
{
  if(head=='\0')
  printf("\nList is empty nothing to diplay");
  else
  {
    //code to be written  
  }
}
void insertion()
{
  int ch;
  char a;
  if(head=='\0')
    printf("First creat a list after than you can insert");
  else
  {
    do{
    printf("\n1.Insertion at beggining");
    prinjtf("\n2.Insertiomn at the last");
    printf("\n3.Insertion before a position");
    printf("\n4.Insertion after a position");  
    printf("\nEnter a choice by a number");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:ins_beg();break;
      case 2:ins_end();break;
      case 3:ins_bef();break;
      case 4:ins_aft();break;
      a=getchar();
      fflush(stdin);
    }
    }while(a=='Y'||a=='y');

  }
}
