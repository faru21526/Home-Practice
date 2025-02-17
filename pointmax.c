#include<stdio.h>
int main () {
 int x=5,y=8;
 int *a=&x;
 int *b=&y;
    if(x>y){
        printf("Max is=%d",x);
    }
    else{
        printf("Max is=%d",y);
    }
    return 0;
}

