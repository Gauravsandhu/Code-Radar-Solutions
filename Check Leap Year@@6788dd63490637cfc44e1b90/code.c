#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", &a);
    if (a%400 == 0){
        if (a%4 == 0){
            printf("Leap Year");
        }
        else {printf("Leap Year");}

    }
    else{
        printf("Not a Leap Year");
    }
}