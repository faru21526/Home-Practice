#include <stdio.h>

int isPerfect(int num) {
int sum=0;
for(int i=1;i<=num/2;i++){
    if(num%i==0){
        sum=sum+i;
    }
}
return (sum==num);
}

int main() {
int lowRange,uppRange;
printf("Enter a lower Range:");
scanf("%d",&lowRange);
printf("Enter a upper Range:");
scanf("%d",&uppRange);

printf("Perfect numbers between %d and %d are:\n",lowRange,uppRange);

for (int i=lowRange;i<=uppRange;i++){
    if(isPerfect(i)){
        printf("%d ",i);
    }
}
printf("\n");
return 0;
}
