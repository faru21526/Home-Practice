#include<stdio.h>
#include<stdlib.h>

struct node{
int value;
struct node *next;

};

int main (){
struct node *head=NULL;
struct node *one=malloc(sizeof(struct node));
struct node *two=malloc(sizeof(struct node));
struct node *three=malloc(sizeof(struct node));
one->value=2;
two->value=4;
three->value=5;

one->next=two;
two->next=three;
three->next=one;

void insertAtEnd(int num){
    struct node *newNode=malloc(sizeof(struct node));
    newNode->value=num;
    if(head==NULL){
        newNode->next=newNode;
        head=newNode;
        return;
    }
    else{
        struct node *temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=head;
    }
}
void insertAtBeginning(int num){
    struct node *newNode=malloc(sizeof(struct node));
    newNode->value=num;
    if(head==NULL){
        newNode->next=newNode;
    }
    else{
        struct node *temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=head;
    }
    head=newNode;

}
void printLinkedList() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node *temp = head;
    do {
        printf("%d ", temp->value);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

void traverseLinkedList() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node *temp = head;
    printf("Traversing the list: ");
    do {
        printf("%d ", temp->value);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}
head=one;
 printLinkedList(head);

    insertAtEnd(7);
    insertAtEnd(8);
    printLinkedList();

    insertAtBeginning(0);
    printLinkedList();

    traverseLinkedList();

    return 0;
}






