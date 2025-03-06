//Stack with Linked List
#include<stdio.h>
#include<stdlib.h>

struct stack {
char name[10];
struct stack *next;
};
struct stack *top=NULL;
void push(){
    struct stack *ptr = malloc(sizeof(struct stack));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }
    printf("Enter a name to push:");
    scanf("%s",ptr->name);
    ptr->next=top;
    top=ptr;
    printf("Push operation is successful\n");
    return 0;
}
void pop(){
    struct stack *ptr;
    if(top==NULL){
            printf("\nUnderflow!!");
    return ;
    }
else{
    struct stack *ptr = top;
    top = top->next;
    printf("\n%s is popped from the stack.\n", ptr->name);

    free(ptr);
}
}
void display(){
    struct stack *ptr;
    ptr=top;
    if(!ptr)
   printf("Stack is empty");
   else
   {
       printf("Stack contains\n");
       while(ptr){
        printf("%s\n",ptr->name);
        ptr=ptr->next;
       }
         }
return 0;
}
int main (){
    char ch;
while(ch!='4'){
    printf("\n1.push  2.pop  3.display 4.Exit \n");
    printf("Enter your option(1-4): ");
    scanf("%c",&ch);
    switch (ch) {
            case '1':
                push();
                break;
            case '2':
                pop();
                break;
            case '3':
                display();
                break;
            case '4':
                printf("Exiting program...\n");
                return 0;

    }
}
return 0;
}




