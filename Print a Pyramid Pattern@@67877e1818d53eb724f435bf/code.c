#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    int ctr = 1;
    scanf("%d",&a);
    for (int i = 0 ; i<a; i++){
        for(int j = i; j<a-1;j++){
            printf(" ");
        }
        for (int k = 0; k<=ctr;){
            printf("*");
        }
        ctr++;
        printf("\n");
    }
}