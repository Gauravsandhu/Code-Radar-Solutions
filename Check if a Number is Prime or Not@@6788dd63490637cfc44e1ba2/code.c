#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    for(int i = 3; i < (a/2);i++){
        if(a%i == 0){
            printf("Not Prime");}
        else{
            printf("Prime");}
        break;
    }
}