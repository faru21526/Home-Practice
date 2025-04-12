//Name:Farjana Akter Jim
//ID:241014080

 #include<stdio.h>
 #define MAX 10

 int stack[MAX];
 int top=-1;

 int isEmpty(){
 if(top==-1)
   return 1;
 else
   return 0;
 }

 int isFull(){
 if(top==MAX-1)
 return 1;
 else
 return 0;

 }

 void push(int value){
 if(isFull()){
 printf("\nOverflow\n");
 }
 else{
 top=top+1;
 stack[top]=value;
 printf("Push=%d\n",stack[top]);
 }
 }
 void pop(){
 if(isEmpty()){
 printf("\nUnderflow");
 return -1;
 }
 else{
 printf("\nPopped value:%d\n",stack[top]);
 top--;
 }
 }
 void display(){
 if(top==-1){
        printf("\nStack is empty");
 }
 else{
 printf("Elements are:\n");
 for(int i=top;i>=0;i--){
 printf("%d ",stack[i]);
 }
 }
 }

 int main(){
 push(10);
 push(11);
 push(12);
 push(13);
 push(14);
 push(15);
 push(16);
 push(17);
 push(18);
 push(19);
 push(20);
 display();
 pop();
 pop();
 pop();
 pop();
 pop();
 display();

 return 0;
}
