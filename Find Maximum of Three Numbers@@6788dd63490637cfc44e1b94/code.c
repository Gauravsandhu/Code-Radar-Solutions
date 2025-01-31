#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a>b){
        if (c>a){
            printf("%d",c);
        }
        else{
            printf("%d", a);
        }
    }
    else if (b>a){
        if(a>c){
        printf("%d",b);
        }
        else if(c>b){
            printf("%d",c);
        }
    }
    }
