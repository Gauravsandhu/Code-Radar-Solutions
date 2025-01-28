#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float r;
    scanf("%f", &r);
    printf("Area: %.2f", r*r*3.14);
}