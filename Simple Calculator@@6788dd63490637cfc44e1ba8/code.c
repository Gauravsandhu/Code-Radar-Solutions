#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,result;
    char d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&d);
    switch(d){
        case +:
            result = a+b;
            break;
        case '-':
            result = a-b;
            break;
        case '*':
            result = a*b;
            break;
        case '/':
            result = a/b;
            break;
        default:
            printf("error");
            break;
    printf("%f", result);
    }
    

}