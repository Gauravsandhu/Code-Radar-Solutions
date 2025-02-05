#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int ctr = -1;
int main() {
    int n;
    scanf("%d",&n);
    
    for (int i=0; i<=n;i++){
        int j = n;
        ctr++;
        if (ctr > 0){
            printf("\n");
            n-=1;   
        }
        for (j; j>0;j--){
            printf("* ");
        }
        
    }
}