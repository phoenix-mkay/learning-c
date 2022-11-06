#include <stdio.h>

int main(){


    char greetings[] = "Hello World!";
    char greetings2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s\n", greetings);
    printf("%s\n", greetings2);
    return 0;
}