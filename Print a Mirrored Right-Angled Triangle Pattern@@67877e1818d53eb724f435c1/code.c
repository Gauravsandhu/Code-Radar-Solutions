#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,ctr;
    ctr = a;
    scanf("%d",&a);
    for(int i = 0 ; i<a;i++){
        for (int j = i; j<a-1;j--){
            printf(" ");
        }
        for(int k = -1;k<i;k++){
            printf("*");
        }
        printf("\n");
       
    }
}