#include<stdio.h>
typedef struct node{
int data;
struct node *left,*right;
}node;
int getchar()
{
    int ch;
    printf("Press 1 for create a node");
    printf("Press 0 for exit");
    scanf("%d",&ch);
    return ch;
}
node *creat()
{
    node *tree;
    int ch;
    tree=(node*)malloc(sizeof(node));
    ch=getchar();
    switch(ch)
    {
    case 0:
        return 0;break;
    case 1:
        printf("\nEnter the data");
        scanf("%d",&tree->data);
        tree->left=creat();
        tree->right=creat();
        break;
    }
    return tree;
}
int main()
{
    node *tree;
    /*if(tree==0)
        return 0;
    else*/
    tree=creat();
    return 0;
}
