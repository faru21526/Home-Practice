#include<stdio.h>
int sum() {
int num1,num2,num3;
printf("Enter two num:");
scanf("%d %d",&num1,&num2);
num3=num1+num2;

return num3;
}
int main () {

int result;
result=sum();
printf("\n Addition of two number is:%d",result);

return 0;

}
