#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
    int n;
    struct stack* next;
}node;
node *top='\0';
void push()
{
    int x;
    node *d;
    d=(node*)malloc(sizeof(node));
    if(d=='\0')
    {
        printf("\noverflow");
    }
    else{
        printf("\nEnter a value");
        scanf("%d",&x);
        if(top=='\0')
        {
            d->n=x;
            d->next='\0';
            top=d;
        }
        else{
            d->n=x;
            d->next=top;
            top=d;
        }
    }
}
void pop()
{
    int x;
    node *p;
    if(top=='\0')
    {
        printf("\nUnderflow");
        return;
    }
    else{
        x=top->n;
        p=top;
        top=top->next;
        free(p);
        printf("\nThe poped item is%d",x);
    }
}
void display()
{
    //int i;
    node *p=top;
    while(p!='\0')
    {
        printf("%d\t",p->n);
        p=p->next;
    }
}
void menu()
{
    printf("\n\t\t\t======Menu=====");
    printf("\n1.push");
    printf("\n2.pop");
    printf("\n3.display");
    printf("\n4.exit");
    printf("\nEnter your choice by a number:");

}
int main()
{
    int ch;
    while(1)
    {
        menu();
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();break;
            case 2: pop();break;
            case 3:display();break;
            case 4: exit(0);break;
            default:printf("\nInvalid entry");
        }
    }
    return 0;
}