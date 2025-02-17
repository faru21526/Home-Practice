#include<stdio.h>

void calculateCube(int num){
int cube=num*num*num;

printf("Cube of %d is %d\n",num,cube);


}

int main (){
calculateCube(5);

return 0;
}
