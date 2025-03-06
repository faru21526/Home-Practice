#include<stdio.h>
#define N 100

int stack[N];
int t=-1;

void push(){
    if(t==N-1){
        printf("\n Overflow!!");
        return ;
    } else {
        t++;
    printf("Enter your data: ");
    scanf("%d",&stack[t]);
    }
}
void pop(){
if(t==-1){
    printf("\nUnderflow!!");
} else {
   printf("\n Pop operation successfully delete %d",stack[t]);
   t--;
}
}
void display(){
for(int i=t;i>=0;--i)
    printf("\n stack[%d]:%d",i+1,stack[i]);
return ;
}
int main (){
    char ch;
while(ch!='4'){
    printf("\n1.push  2.pop  3.display  4.quit\n");
    printf("Enter your option(1-4): ");
    scanf("%c",&ch);
    switch(ch){
    case'1':push(); break;
    case'2':pop();  break;
    case'3':display(); break;

    }
}
return 0;
}







