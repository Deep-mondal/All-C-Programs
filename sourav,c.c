#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node *head = NULL, *tail = NULL;

void createDoublyLinkedList(){
    int x;
    char a;
    struct node *newnode, *head = NULL;

    do{
    printf("Enter data: \n");
    newnode = (struct node*)malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    //newnode->data = x;
    newnode->prev = NULL, newnode->next = NULL;
    if(head == NULL){
        head= newnode;
        tail=newnode;
    }
    else{
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
    printf("Craete another?\n");
    printf("%d",newnode->data);
    fflush(stdin);
    a = getchar();
    } while(a == 'Y'||a == 'y');
}
void insertAtBeginning(){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: \n");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
void insertAtEnd(){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: \n");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void display(){
    struct node *temp = tail;
    printf("The elements are:");
    printf("%d",head->data);
    while(temp!='\0'){
        printf("%d", temp->data);
        temp = temp->prev;
    }
    //printf("\n");
}
void menu(){
    printf("\t\t\tCraete Doubly Linke List - 1\n");
    printf("\t\t\tInsert At Beggining - 2\n");
    printf("\t\t\tInsert At The End - 3\n");
    printf("\t\t\tDisplay Linked List - 4\n");
    printf("\t\t\tEnter your choice:\n");
}
int main(){
    int ch;

    while(1){
        menu();
        scanf("%d", &ch);
        switch(ch){
            case 1:
                createDoublyLinkedList();
                break;
            case 2:
                insertAtBeginning();
                break;
            case 4:
                display();
                break;
        }
    }
    return 0;
}
