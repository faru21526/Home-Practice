#include<stdio.h>
#define MAX 8

int stack[MAX];
int top=-1;

//function to check if the stack is empty
int isEmpty(){
    if(top==-1)
        return 1;
    else
        return 0;
}
// Function to check if the stack is full
int isFull(){
    if(top==MAX-1)
        return 1;
    else
        return 0;
}
// Function to push an element onto the stack
void push(int value){
 if (isFull()){
        printf("\n Overflow!!");
 } else {
     printf("Pushed %d onto the stack\n",value);
     top=top+1;
    stack[top]=value;
 }
}
// Function to pop an element from the stack
int pop(){
if(isEmpty()){
    printf("\n Underflow!!");
    return -1;
} else {
    return stack[top--];

}
}

int main (){
// Pushing 6 elements onto the stack
push(5);
push(7);
push(9);
push(11);
push(13);
push(15);
push(17);
// Printing elements by popping them back
printf("Popped elements:\n");
while(!isEmpty()){
    int data=pop();
    printf("%d\n",data);
}
printf("\n");
return 0;
}



