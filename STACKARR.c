#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int a[MAX],top;//Global Variable
void push(int x)
{
	if(top==MAX-1)
	{
		printf("Stack is Full\n");
		return;
	}
	top++;
	a[top]=x;
}
void pop()
{
	if(top==-1)
	{
		printf("The Stack is Empty. Can't pop");
		return;
	}
	printf("The popped element is %d",a[top]);
	top--;
}
void show()
{
	int i;
	if(top==-1)
	{
		printf("Empty Stack. Nothing to display");
		return;
	}
	printf("The elements of the Stack are ");
	for(i=0;i<=top;i++)
		printf("%d ",a[i]);
}
void menu()
{
	printf("\n");
	printf("\t\t\t PROGRAM ON Stack\n");
	printf("\t\t\t   1. PUSH\n");
	printf("\t\t\t   2. POP\n");
	printf("\t\t\t   3. DISPLAY\n");
	printf("\t\t\t   4. EXIT\n");
	printf("Enter your choice ");
}
int main()
{
	int ch,m;
	top=-1;
	while(6)//Infinite Loop
	{
		menu();
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(top!=MAX-1)
				{
					printf("\nEnter the number to push ");
					scanf("%d",&m);
				}
				push(m);
				break;
			case 2:
				pop();
				break;
			case 3:
				show();
				break;
			case 4:
				exit(0);
			default:
				printf("\nInvalid choice \n");
				break;
		}//End of switch
	}//End of while loop
	return 0;
}
