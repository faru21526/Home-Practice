//Name:Farjana Akter Jim
//Id:241014080

#include<stdio.h>
#include<stdlib.h>

struct node{
int value;
struct node *next;
};
struct node *head=NULL;


void push(int num){
struct node *newNode=malloc(sizeof(struct node));
newNode->value=num;
newNode->next=head;
head=newNode;
}

void pop(){
struct node *temp=head;
if(head==NULL)
    printf("Stack is empty\n");
else{
    printf("\npopped element=%d ",head->value);
    head=head->next;
    free(temp);
}

}
void display(){
struct node *temp=head;
while(temp !=NULL){
    printf("%d ",temp->value);
    temp=temp->next;
}

}
int main(){
push(5);
push(15);
push(25);
push(35);
push(45);
printf("Element in the list: ");
display();
pop();
pop();
pop();
printf("\nShowing the new linked list after the pop: ");
display();

return 0;

}
