#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    for (int i = 0; i<a; i++){
        for (int j = 1; j<a;j++){
            if(i>2 && (j>1||(j == a-1))){
                printf(" ");
            }
            else{printf("*");}
        }
        printf("\n");
    }
}