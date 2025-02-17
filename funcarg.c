#include<stdio.h>
void sum(int num1,int num2){
int num3;
num3=num1+num2;
printf("\n Addition of two number is:%d",num3);
}
int main (){
int num1,num2;
printf("Enter two num:");
scanf("%d %d",&num1,&num2);
sum(num1,num2);
return 0;


}
