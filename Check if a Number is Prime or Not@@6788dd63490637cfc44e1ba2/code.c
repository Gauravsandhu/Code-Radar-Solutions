#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    for(int i = 1; i < (a/2);i++){
        if(a%(i+2) == 0 && i>2){
            printf("Not Prime");}
        else if (a == 1 || a == 2){
            printf("Not Prime");}
        else{printf("Prime");}
        break;

    }
}