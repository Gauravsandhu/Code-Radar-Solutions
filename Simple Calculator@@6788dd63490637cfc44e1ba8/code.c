#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    char d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&d);
    switch(d){
        case '+':
            printf("%d", a+b);
            break;
        case '-':
            printf("%d", a-b);
            break;
        case '*':
            printf("%d", a*b);
            break;
        case '/':
            printf("%d", a/b);
            break;
        default:
            printf("error");
            break;
    }
    

}