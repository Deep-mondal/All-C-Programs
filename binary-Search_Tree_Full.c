#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *l;
    struct node *r;
} node;
node *root = '\0', *chl = '\0', *par = '\0';
int top = -1;
node **arr;
int search(int x)
{
    node *p, *q;
    if (root == '\0')
    {
        printf("\nThe tree is empty");
        return 0;
    }
    if (x == root->data)
    {
        return 1;
    }
    if (x > root->data)
    {
        p = root->r;
        q = root;
    }
    else
    {
        p = root->l;
        q = root;
    }
    while (p != '\0')
    {
        if (x == p->data)
        {
            return 1;
        }
        if (x > p->data)
        {

            q = p;
            p = p->r;
        }
        else
        {
            q = p;
            p = p->l;
        }
    }
    chl = '\0';
    par = q;
}
void insert(int x)
{
    node *d;
    search(x);
    if (chl != '\0')
    {
        printf("The item already exists in the tree\n");
        return;
    }
    d = (node *)malloc(sizeof(node));
    d->data = x;
    d->r = '\0';
    d->l = '\0';
    if (par == '\0')
    {
        root = d;
        return;
    }
    if (x < par->data)
        par->l = d;
    else
        par->r = d;
}
void pre_Order()
{
    node *p = root;
    if (root == '\0')
    {
        printf("\nThe tree is empty");
        return;
    }
    arr[++top] = '\0';
    while (p != '\0')
    {
        printf("%d", p->data);
        if (p->r != '\0')
        {
            top++;
            arr = (node **)realloc(arr, (top + 1) * sizeof(node));
            arr[top] = p->r;
        }
        if (p->l != '\0')
        {
            p = p->l;
        }
        else
        {
            p = arr[top--];
        }
    }
}
void in_Order()
{
    int flag = 0;
    node *p = root;
    if (root == NULL)
    {
        printf("\nThe tree is Empty");
        return;
    }
    while (p != '\0')
    {
        if (p->l != '\0' && flag == 0)
        {
            arr[++top] = p;
            p = p->l;
        }
        else
        {
            printf("%d", p->data);
            if (p->r != '\0')
            {
                p = p->r;
                flag = 0;
            }
            else
            {
                p = arr[top--];
                flag = 1;
            }
        }
    }
}
void menu()
{
    printf("\n======Menu======");
    printf("\n1.Search");
    printf("\n2.Insert");
    printf("\n3.In order");
    printf("\n4.pre order");
    printf("\n5.Exit");
    printf("\nEnter a choice by a number...............");
}
int main(int ch)
{
    int x, p;
    while (1)
    {
        menu();
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter the element to be searched");
            scanf("%d", &x);
            int a = search(x);
            if (a == 1)
                printf("\nFound");
            else
                printf("\nNot Found");
            break;
        case 2:
            printf("Enter a node to insert ");
            scanf("%d", &p);
            insert(p);

            break;
        case 3:
            in_Order();
            break;
        case 4:
            pre_Order();
            break;
        case 5:
            exit(0);
        }
    }
    return 0;
}
