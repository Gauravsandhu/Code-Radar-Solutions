#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;scanf("%d",&a);if(a%3 == 0){if(a%5 == 0){printf("Divisible by Both");}else{printf("Divisble by 3");}}else{printf("Divisible by 5");}
}