#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int ctr = 0;
int main() {
    int n;
    scanf("%d",&n);
    int j = n;
    for (int i=0; i<=n;i++){
        if (ctr > 0){
            printf("\n");
            n-=1;
        }
        for (int j; j>0;j--){
            printf("* ");
            ctr++;
        }
        
    }
}