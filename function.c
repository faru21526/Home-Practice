#include<stdio.h>
void sum() {
    int num1,num2,num3;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    num3=num1+num2;
    printf("\n Addition of two number is:%d",num3);
}
int main (){
sum();
return 0;
}
