#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,ctr;
    scanf("%d",&a);
    for(int i =0 ; i<a;i++){
        for (int j = a; j>1;j--){
            printf(" ");
        }
        printf("*");
    }
}