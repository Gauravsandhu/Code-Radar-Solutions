#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b;
    scanf("%d",&a);
    scanf("%d",&b);if(a/b == b){printf("Yes");}else{printf("No");}
}