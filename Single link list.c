#include<stdio.h>
#include<stdlib.h>
typedef struct linklist
{
    int n;
    struct linklist *next;
}node;
node *head='\0';//Initially the list is Empty
void menu()
{
    printf("\t\t\tPROGRAM on SINGLE LINK lIST\n");
    printf("\t\t\t    1. CREATE\n");
    printf("\t\t\t    2. DISPLAY\n");
    printf("\t\t\t    3. SEARCH\n");
    printf("\t\t\t    4. COUNT\n");
    printf("\t\t\t    5. MODIFY\n");
    printf("\t\t\t    6. INSERTION\n");
    printf("\t\t\t    7. DELETION\n");
    printf("\t\t\t    8. EXIT\n");
    printf("Enter your choice ");
}
void deleteMenu()
{
    printf("\t\tDELETION from SINGLE LINK lIST\n");
    printf("\t\t    1. Delete By Position\n");
    printf("\t\t    2. Delete By Value\n");
    printf("\t\t    3. Back to Main Menu\n");
    printf("Enter your choice ");
}
void insertMenu()
{
    printf("\t\tINSERTION in SINGLE LINK lIST\n");
    printf("\t\t    1. Insert By Position\n");
    printf("\t\t    2. Insert After a Value\n");
    printf("\t\t    3. Insert Before a Value\n");
    printf("\t\t    4. Back to Main Menu\n");
    printf("Enter your choice ");
}
void create()
{
    int x;
    char a;
    node *t, *h;
    if(head!='\0')
    {
        printf("The list is already created. Try to modify it\n");
        return;
    }
    do
    {
        printf("Enter a value ");
        scanf("%d",&x);
        t=(node *)malloc(sizeof(node));
        t->n=x;
        t->next='\0';
        //If the current node is the 1st node, then store address of the node in head
        if(head=='\0')
        {
            head=t;
            h=t;
        }
        else
        {
            h->next=t;
            h=t;
        }
        printf("Create another node ? ");
        fflush(stdin);
        a=getchar();
        fflush(stdin);
    }
    while(a=='Y' || a=='y');
}
void display()
{
    node *h=head;
    if(head=='\0')
    {
        printf("The list is EMPTY. Nothing to display\n");
        return;
    }
    printf("The elements are ");
    while(h!='\0')
    {
        printf("%d ",h->n);
        h=h->next;
    }
    printf("\n");
}
node * search(int x)
{
    node *h=head;
    while(h!='\0')
    {
        if(h->n==x)
            return h;
        h=h->next;
    }
    return NULL;
}
int count()
{
    int c=0;
    node *p=head;
    while(p!='\0')
    {
        c++;
        p=p->next;
    }
    return c;
}
void del_by_value(int x)
{
    node *p,*h;
    p=search(x);
    if(p=='\0')
    {
        printf("%d is NOT found. Can't be deleted\n",x);
        return;
    }
    if(head==p)//Deletion of 1st node
        head=p->next;
    else
    {
        h=head;
        while(h->next!=p)
            h=h->next;
        h->next=p->next;
    }
    free(p);
}
void del_by_position(int p)
{
    int c=count();
    int i;
    node *h1,*h2,*t;
    if(p<=0 || p>c)
    {
        printf("Invalid Position\n");
        return;
    }
    t=head;
    if(p==1)
    {
        h1=head;
        head=head->next;
        free(h1);
    }
    else
    {
        for(i=1,h1=head,h2=head;i<p;i++)
        {
            h2=h1;
            h1=h1->next;
        }
        h2->next=h1->next;
        free(h1);
    }
}
void insert_position(int p)
{
    int x,i;
    node *t,*h;
    int c=count();
    if(p<=0 || p>c+1)
    {
        printf("Invalid Position");
        return;
    }
    printf("Enter the value to insert ");
    scanf("%d",&x);
    t=(node *)malloc(sizeof(node));
    t->n=x;
    if(p==1 && c==0)//List is empty and want to insert at position 1
    {
        head=t;
        t->next='\0';
        return;
    }
    if(p==1 && c>0)
    {
        t->next=head;
        head=t;
    }
    else
    {
        h=head;
        for(i=1;i<=p-2;i++)
            h=h->next;
        t->next=h->next;
        h->next=t;
    }
}
void insert_before(int x)
{
    int m;
    node *t,*h,*p;
    printf("Before which value do U want to insert ? ");
    scanf("%d",&m);
    p=search(m);
    if(p=='\0')
    {
        printf("%d is not found",m);
        return;
    }
    t=(node *)malloc(sizeof(node));
    t->n=x;
    if(head==p)
    {
        t->next=head;
        head=t;
    }
    else
    {
        h=head;
        while(h->next!=p)
            h=h->next;
        h->next=t;
        t->next=p;
    }
}
void insert_after(int x)
{
    int m;
    node *t,*h,*p;
    printf("After which value do U want to insert ? ");
    scanf("%d",&m);
    p=search(m);
    if(p=='\0')
    {
        printf("%d is not found",m);
        return;
    }
    t=(node *)malloc(sizeof(node));
    t->n=x;
    t->next=p->next;
    p->next=t;
}
int main()
{
    int ch,x,m,pos,c,cd,ci,flag;
    node *p;
    while(1)//Infinite Loop
    {
        menu();
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                printf("Enter the value to search ");
                scanf("%d",&x);
                p=search(x);
                if(p=='\0')
                    printf("Not Found\n");
                else
                    printf("Found\n");
                break;
            case 4:
                x=count();
                printf("Number of elements is %d\n",x);
                break;
            case 5:
                    printf("Enter the value to modify ");
                    scanf("%d",&m);
                    p=search(m);
                    if(p=='\0')
                        printf("%d does not exist. So can't be modified\n",m);
                    else
                    {
                        printf("Enter the new value ");
                        scanf("%d",&x);
                        p->n=x;
                    }
                    break;
            case 6:
                flag=0;
                    while(1)
                    {
                        insertMenu();
                        scanf("%d",&ci);
                        switch(ci)
                        {
                            case 1:
                                printf("Enter the position ");
                                scanf("%d",&pos);
                                insert_position(pos);
                                break;
                            case 2:
                                printf("Enter the value to insert ");
                                scanf("%d",&x);
                                insert_before(x);
                                break;
                            case 3:
                                printf("Enter the value to insert ");
                                scanf("%d",&x);
                                insert_after(x);
                                break;
                            case 4:
                                flag=1;
                                break;
                        }
                        if(flag==1)
                            break;
                    }
                    break;
            case 7:
                    flag=0;
                    while(1)
                    {
                        deleteMenu();
                        scanf("%d",&cd);
                        switch(cd)
                        {
                            case 1:
                                printf("Enter the position ");
                                scanf("%d",&pos);
                                del_by_position(pos);
                                break;
                            case 2:
                                printf("Enter the value to delete ");
                                scanf("%d",&x);
                                del_by_value(x);
                                break;
                            case 3:
                                flag=1;
                                break;
                        }
                        if(flag==1)
                            break;
                    }
                    break;
            case 8:
                exit(0);
        }//END of SWITCH
    }//END of while
}//END of main()
