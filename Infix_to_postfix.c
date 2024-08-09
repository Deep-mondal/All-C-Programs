#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 50
char inf[size],post[size],stack[size];
int top=-1;
void push()
{
    char x;
    top++;
    x=stack[top];
}
char pop()
{
    char a;
    a=stack[top];
    top--;
    return a;
}
void convert()
{
    printf("\nEnter the infix equation:");
    scanf("%[^\n]s",inf);
    int i,j;char b;
    int a=strlen(inf);
    for(i=0;i!=a;i++)
    {
        if(inf[i]=='('||inf[i]==')'||inf[i]=='+'||inf[i]=='-'||inf[i]=='*'||inf[i]=='/')
        {
            switch(stack[top])
            {
                case '(': push();break;
                case '+':if(stack[top]=='*'||stack[top]=='/'||stack[top]=='+'||stack[top]=='-')
                         {b=pop();post[i]=b;}else push();break;
                case'-':if(stack[top]=='*'||stack[top]=='/'||stack[top]=='+'||stack[top]=='-')
                         {b=pop();post[i]=b;} else push();break;
                case '*':if(stack[top]=='*'||stack[top]=='/')
                         {b=pop();post[i]=b;} else push();break;
                case '/':if(stack[top]=='*'||stack[top]=='/')
                         {b=pop();post[i]=b;} else push();break;
                case')': for(j=top;j>'(';j--){post[j]==stack[top];}top--;

            }
        }
         
        else
        {
            post[i]=inf[i];
        }
    }
}
void display()
{
    int i;
    for(i=0;i<'\0';i++)
    {
        printf("%c",post[i]);
    }
}
int main()
{
    convert();
    display();
    return 0;
}