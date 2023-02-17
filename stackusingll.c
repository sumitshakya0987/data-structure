#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
static int size = 0;
void push(int item)
{
    size++;
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = item;
    if (head == NULL)
    {
        temp->next=NULL;
        head = tail = temp;
        return;
    }

    temp->next = head;
    head = temp;
}
int pop()
{
    if (head == NULL)
    {
        printf("Linked list is empty\n");
        return -1;
    }
    size--;
    int val = head->data;
    head = head->next;
    return val;
}
void peek(){
    if(head==NULL){
        printf("Stack underFlow\n");
        return;
    }
    printf("Element at top is: %d\n",head->data);
}
void display(){
    if(head==NULL){
        printf("Stack is empty\n");
        return;
    }
    struct node *temp=head;
    printf("Stack looks like:\n");
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}

void main(){
    int n;
    printf("sumit shakya IT-C 2100320130173\n");
    while(n!=5){
        printf("Press 1 for push.\nPress 2 for pop.\nPress 3 for peek.\nPress 4 for display.\nPress 5 for exit.\n");
        scanf("%d",&n);
        switch(n){
            case(1):{int m;
            printf("Enter data\n");
            scanf("%d",&m);
            push(m);
            }
            break;
            case(2):printf("Poped element is: %d\n",pop());
            break;
            case(3):peek();
            break;
            case(4):display();
            break;
            case(5):
            break;
        }
    }
}