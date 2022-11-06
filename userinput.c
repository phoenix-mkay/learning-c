#include <stdio.h>

int main(){

    int myNum;
    char firstName[30];
    printf("Type a number:\n");

    scanf("%d",&myNum);

    printf("Your number is: %d",myNum);

    printf("Enter your first name: \n");

    scanf("%s",firstName);
    printf("Hello %s",firstName);
    return 0;
}