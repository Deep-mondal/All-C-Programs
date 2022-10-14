#include<stdio.h>
#include<stdlib.h>
typedef struct sinlst{
int data;
struct sinlst* next;}node;
node* head='\0';
void menu()
{
    printf("\n==========MENU==========");
    printf("\n\t\t\t\t1.Create");
    printf("\n\t\t\t\t2.Insertion");
    printf("\n\t\t\t\t3.Deletion");
    printf("\n\t\t\t\t4.Modify");
    printf("\n\t\t\t\t5.Search");
    printf("\n\t\t\t\t6.Count");
    printf("\n\t\t\t\t7.display");
    printf("\n\t\t\t\t8.Reverse");
    printf("\n\t\t\t\t9.Exit");
    printf("\nEnter your Choice by a Number:");
}
void ins_menu(){
printf("\n\t\t\t\t\t\t\t\t1.Insert at beggining");
printf("\n\t\t\t\t\t\t\t\t2.Insert at End");
printf("\n\t\t\t\t\t\t\t\t3.Insert at before a given position");
printf("\n\t\t\t\t\t\t\t\t4.Insert at after a given position");
printf("\nEnter your Choice by a Number:");
}
void del_menu(){
printf("\n\t\t\t\t\t\t\t\t1.Delete at beggining");
printf("\n\t\t\t\t\t\t\t\t2.Delete at end");
printf("\n\t\t\t\t\t\t\t\t3.Delete at before a given position");
printf("\n\t\t\t\t\t\t\t\t4.Delete at after a given position");
printf("\n\t\t\t\t\t\t\t\tEnter your Choice by a Number:");
}
int getchar()
{
    int a;
    printf("\nAre you want to Continue? press 5");
    scanf("%d",&a);
    return a;
}
void creat()
{
    node *p,*d;
    int n;
    printf("\nEnter a value:");
    scanf("%d",&n);
    d=(node*)malloc(sizeof(node));
    d->data=n;
    d->next='\0';
    if(head!='\0')
    {
        printf("\nList is already created!");
        return;
    }
    else
    {
        head=d;
        p=d;
        printf("Node Created\n");
    }
}
void ins_beg()
{
    int num;
    node *d,*p;
    d=(node*)malloc(sizeof(node));
    printf("\nEnter a value:");
    scanf("%d",&num);
    d->data=num;
    d->next='\0';
    if(head=='\0')
    {
        printf("First Create the list\n");
        return;
    }
    else
    {
        p=head;
        head=d;
        d->next=p;
        printf("\nNode inserted");
    }
}
void ins_last()
{
    int num,c,i;
    node *d,*p;
    d=(node*)malloc(sizeof(node));
    printf("\nEnter a value:");
    scanf("%d",&num);
    d->data=num;
    d->next='\0';
    if(head=='\0')
    {
        printf("First Create the list\n");
        return;
    }
    else
    {
        c=count();
        for(i=1;i<=c;i++)
        {
            p=p->next;
        }
        p->next=d;
        printf("\nNode inserted");
    }

}
int count()
{
    int c=0;node *p;
    p=head;
    if(head=='\0')
    {
        printf("\nList Not found! can not Count");
        return;
    }
    else
    {
        while(p->next!='\0')
        {
            c++;
            p=p->next;
        }
    }
    return c;
}
void ins_aft()
{
    int pos,val,i;
    int c=count();
    node *p,*d;
    d=(node*)malloc(sizeof(node));
    printf("\nEnter the position:");
    scanf("%d",&pos);
    printf("Enter a Value:");
    scanf("%d",&val);
    d->data=val;
    p=head;
    if(pos>c)
    {
        printf("\nInvalid Position!");
        return;
    }
    else
    {

        for(i=1;i<=pos;i++)
        {
            p=p->next;
        }
        d->next=p->next;
        p->next=d;
        printf("\nNode inserted");
    }
}
void ins_bfr()
{
    int pos,val,i;
    int c=count();
    node *p,*d;
    d=(node*)malloc(sizeof(node));
    printf("\nEnter the position:");
    scanf("%d",&pos);
    printf("Enter a Value:");
    scanf("%d",&val);
    d->data=val;
    p=head;
    if(pos>c)
    {
        printf("\nInvalid Position!");
        return;
    }
    else
    {

        for(i=1;i<pos;i++)
        {
            p=p->next;
        }
        d->next=p->next;
        p->next=d;
        printf("\nNode inserted");
    }
}
void del_beg()
{
    node *p;
    p=head;
    if(head=='\0')
    {
        printf("\nList Not found! can not delete");
        return;
    }
    else
    {
        head=p->next;
        free(p);
        printf("\nNode Deleted");
    }
}
void del_last()
{
    int i,c;
    node *p;
    p=head;
    c=count();
        if(head=='\0')
    {
        printf("\nList Not found! can not delete");
        return;
    }
    else
    {
        for(i=1;i<=c;i++)
        {
            p=p->next;
        }
        free(p);
        for(i=1;i<c;i++)
        {
            p=p->next;
        }
        p->next='\0';
        printf("\nNode Deleted");

    }

}
void del_aft()
{
    int pos,i;
    int c=count();
    node *p;
    printf("\nEnter the position:");
    scanf("%d",&pos);
    p=head;
    if(pos>c)
    {
        printf("\nInvalid Position!");
        return;
    }
    else
    {
        for(i=1;i<=pos;i++)
        {
            p=p->next;
        }
       free(p->next);
        for(i=1;i<=pos;i++)
        {
            p=p->next;
        }
        p->next='\0';
        printf("\nNode Deleted");
        }
}
void del_bfr()
{
      int pos,i;
    int c=count();
    node *p;
    printf("\nEnter the position:");
    scanf("%d",&pos);
    p=head;
    if(pos>c)
    {
        printf("\nInvalid Position!");
        return;
    }
    else
    {

        for(i=1;i<=pos-2;i++)
        {
            p=p->next;
        }
       free(p->next);
            for(i=1;i<=pos-2;i++)
        {
            p=p->next;
        }
        p->next='\0';
        printf("\nNode Deleted");
        }
}
void display()
{
    node *p;
    p=head;
    if(head=='\0')
    {
        printf("\nList Not found! can not delete");
        return;
    }
    else{
    while(p->next!='\0')
    {
        printf("%d->",p->data);
        p=p->next;
    }}
}
void search()
{
    node *p;
    int a;
    printf("\nEnter the data to be search:");
    scanf("%d",&a);
    p=head;
    if(head=='\0')
    {
        printf("\nList Not found! can not delete");
        return;
    }
    else{while(p->next!='\0')
    {
        if(a==p->data)
        {printf("\nData Found");
        break;}
        p=p->next;
    }}
}
int main()
{
    int c1,c2,c3,f;
    while(1)
    {
        menu();
        scanf("%d",&c1);
        switch(c1)
        {
        case 1: creat();break;
        case 2: f=0;while(1){ins_menu();
                scanf("%d",&c2);
                switch(c2)
                {
                    case 1:ins_beg();break;
                    case 2:ins_last();break;
                    case 3:ins_bfr();break;
                    case 4:ins_aft();break;
                    case 5: f=1;break;
                    default:printf("\nInvalid Entry!");
                }if(f==1) break;
                }
                break;

        case 3:f=0;while(1)
                {
                del_menu();
                scanf("%d",&c3);
                switch(c3)
                {
                    case 1:del_beg();break;
                    case 2:del_last();break;
                    case 3:del_bfr();break;
                    case 4:del_aft();break;
                    case 5: f=1;break;
                    default:printf("\nInvalid Entry!");
                }if(f==1) break;
                } 
                break;
        case 4:printf("\nServer error!");break;
        case 5:search();break;
        case 6: count();break;
        case 7:display();break;
        case 8:printf("Server Error!\n");break;
        case 9:exit(0);break;
            default:printf("Invalid Entry!\n");
        }
    }
    return 0;
}
