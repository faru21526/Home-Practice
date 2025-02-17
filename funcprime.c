#include <stdio.h>

int isPrime(int num) {
for(int i=2;i<=num/2;i++){
    if(num%i==0){
        return 0;
    }
}
return 1;
}

int main() {
int lowRange,uppRange;
printf("Enter a lower Range:");
scanf("%d",&lowRange);
printf("Enter a upper Range:");
scanf("%d",&uppRange);

printf("Perfect numbers between %d and %d are:\n",lowRange,uppRange);

for (int i=lowRange;i<=uppRange;i++){
    if(isPrime(i)){
        printf("%d ",i);
    }
}
printf("\n");
return 0;
}

