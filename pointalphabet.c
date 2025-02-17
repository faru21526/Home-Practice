#include<stdio.h>
void printAlphabet(char *ptr);
int main () {
    char letter='A';
    char *ptr=&letter;
    printf("English alphabet: ");
    printAlphabet(ptr);
    return 0;
}

void printAlphabet(char *ptr){
    for(int i=0;i<26;i++){
        printf("%c ",*ptr);
        (*ptr)++;
    }

}
