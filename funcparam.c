#include <stdio.h>


void myFunction(char name[]){
    printf("Hello %s\n",name);
}

void myFunction2(char name[],int age){
    printf("Hello %s. You are %d years old.\n",name,age);
}
int main(){
    myFunction("Liam");
    myFunction("Jenny");
    myFunction("Anja");

    myFunction2("Liam", 3);
    myFunction2("Jenny", 14);
    myFunction2("Anja", 30);
    return 0;
}