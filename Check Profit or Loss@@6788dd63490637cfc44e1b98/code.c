#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if (b-a>0){
        printf("Profit");
    }
    else if (b-a == 0){
        printf("No Profit No Loss");
    }
    else{
        printf("Loss");
    }
}