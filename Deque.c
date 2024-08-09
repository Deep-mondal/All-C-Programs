#include<stdio.h>
#define size 5
int dq[size];
int f=-1;int r=-1;

void insert_front()
{
    int x;
    printf("\nEnter the element to be inserted");
    scanf("%d",&x);
    if(f=r+1)
    {
        printf("\nThe array is FULL!");
    }
    else if(f==-1&&r==-1)
    {
        f=r=0;
        dq[f]=x;
    }
    else if(f==0)
    {
        f=size-1;
        dq[f]=x;
    }
    else
    {
        f--;
        dq[f]=x;
    }
}
void insert_rear()
{
    int x;
    printf("\nEnter the element to be inserted");
    scanf("%d",&x);
    if(f=r+1)
    {
        printf("\nThe array is FULL!");
    }
    else if(f==-1&&r==-1)
    {
        f=r=0;
        dq[r]=x;
    }
    else if(r==size-1)
    {
        r=0;
        dq[r]=x;
    }
    else
    {
        r++;
        dq[r]=x;
    }
}
void delete_front()
{

    if(f==-1&&r==-1)
    {
        printf("\nThe array is Empty!");
    }
    else if(f==size-1)
    {
        printf("\nThe deleted elements are",dq[f]);
        f=0;
    }
    else if(f==r)
    {
      printf("\nThe deleted elements are",dq[f]);
      f=r=-1;
    }
    else
    {
       printf("\nThe deleted elements are",dq[f]);
       f++;
    }
}
void delete_rear()
{
        if(f==-1&&r==-1)
    {
        printf("\nThe array is Empty!");
    }
    else if(r==0)
    {
        printf("\nThe deleted elements are",dq[r]);
        r=size-1;
    }
    else if(f==r)
    {
      printf("\nThe deleted elements are",dq[r]);
      f=r=-1;
    }
    else
    {
       printf("\nThe deleted elements are",dq[r]);
       r--;
    }
}
void display()
{
    int i;
    if(f==-1&&r==-1)
    {
        printf("\nThe array is Empty!");
    }
    else{
    for(i=f;i<=r;i++)
    {
       printf("%d\t",dq[i]);
       i=(i+1)%size;
    }
    }

}
void menu()
{
    printf("\n===========MENU==========");
    printf("\n 1.Input restricted");
    printf("\n 2.Output restricted");
    printf("\n 3. Exit");
    printf("\nEnter a choice by a number.......");

}
void in_res_menu()
{
    int ch,a;
     while(1)
    {
    printf("\nFix the insertion side");
    printf("\n 1.Front side");
    printf("\n 2.Rear side");
    printf("\n 3.Exit");
    printf("\nEnter a choice by a number.......");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:output();break;
        case 2:output();break;
        case 3:a=flag(ch);
                if(a!=0)
                    return;
                    break;
    }
    }
}
void out_res_menu()
{
    int ch,a;
     while(1)
    {
    printf("\nFix the deletion side");
    printf("\n 1.Front side");
    printf("\n 2.Rear side");
    printf("\n 3.Exit");
    printf("\nEnter a choice by a number.......");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:input();break;
        case 2:input();break;
        case 3:a=flag(ch);
                if(a!=0)
                    return;
                break;
    }
    }
}
void input()
{
        int ch,a;
         while(1)
    {
    printf("\n 1.Front side");
    printf("\n 2.Rear side");
    printf("\n 3.Exit");
    printf("\nEnter a choice by a number.......");
    scanf("%d",&ch);

        switch(ch)
    {
        case 1:insert_front();break;
        case 2:insert_rear();break;
        case 3:a=flag(ch);
                if(a!=0)
                return;
                    break;
    }
    }
}
void output()
{
        int ch,a;
         while(1)
    {
    printf("\n 1.Front side");
    printf("\n 2.Rear side");
    printf("\n 3.Exit");
    printf("\nEnter a choice by a number.......");
    scanf("%d",&ch);

        switch(ch)
    {
        case 1:delete_front();break;
        case 2:delete_rear();break;
        case 3:a=flag(ch);
                if(a!=0)
                    return;
                    break;
    }
    }
}
int  flag(int x)
{
    int flag=0;
   return ++flag;
}
int main()
{
    int ch;
    while(1){
    menu();
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:in_res_menu();break;
        case 2:out_res_menu();break;
        case 3:exit(0);break;
    }
    }
    return 0;
}

