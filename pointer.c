#include <stdio.h>

int main(){
    int myAge = 43;
    int* ptr = &myAge;

    printf("%d\n",myAge);
    printf("%p\n",&myAge);
    // Reference: Output the memory address of myAge with the pointer(0x7...)
    printf("%p\n",ptr);

    // Derefence:Output the value of myAge with the pointer
    printf("%d\n",*ptr);

    return 0;
}