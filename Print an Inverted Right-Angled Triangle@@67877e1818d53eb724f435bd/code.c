#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int ctr = 0;
int main() {
    int n;
    scanf("%d",&n);
    for (int i=0; i<n;i++){
        if (ctr > 0){printf("\n");n--;
        }
        for (int j = n; j>0;j--){
            printf("*");
            ctr++;
        }
        
    }
}