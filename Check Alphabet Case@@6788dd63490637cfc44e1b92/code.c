#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    if (isalpha(a) != 0){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
}