#include<stdio.h>
#include<stdlib.h>

struct node{
    int value;
    struct node *next;
};
//print the linked list value
void printLinkedList(struct node *p){
while(p!=NULL){
    printf("%d ",p->value);
    p=p->next;
}
}
int main (){
//initialize nodes
struct node *head;
struct node *one=NULL;
struct node *two=NULL;
struct node *three=NULL;
//allocate memory
one=malloc(sizeof(struct node));
two=malloc(sizeof(struct node));
three=malloc(sizeof(struct node));
//assign values
one->value=1;
two->value=2;
three->value=3;
//connect nodes
one->next=two;
two->next=three;
three->next=NULL;
//traverse
void printTraverseLinkedList(){
struct node *temp=head;
printf("\n\nList elements are-\n");
while(temp!=NULL){
    printf("%d ",temp->value);
    temp=temp->next;
}
}
//insert at the End
void insertAtEnd(int num){
    struct node *newNode;
    newNode=malloc(sizeof(struct node));
    newNode->value=num;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
    }
    else{

    struct node *tmp=head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=newNode;

}
}
//insert at the beginning
void insertAtBegining(int num){
    struct node *newNode;
    newNode=malloc(sizeof(struct node));
    newNode->value=num;
    newNode->next=head;
    head=newNode;

}
//printing node value
head=one;
printLinkedList(head);
printTraverseLinkedList();
insertAtEnd(4);
insertAtEnd(5);

printTraverseLinkedList();
insertAtBegining(0);
printTraverseLinkedList();




}







