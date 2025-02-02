#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a==b && a ==c){
        printf("Equilateral");
    }
    else if((a==b && a!=c)|| (c==b && c!= a)){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
}