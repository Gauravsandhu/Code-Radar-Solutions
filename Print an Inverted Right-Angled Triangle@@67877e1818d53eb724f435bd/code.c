#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int ctr = -1;
int main() {
    int n;
    scanf("%d",&n);
    
    for (int i=0; i=n+1;i++){
        int j = n;
        ctr++;
        n-=1;   
        if (ctr > 0){
            printf("\n");
            
        }
        for (j; j>0;j--){
            printf("* ");
        }
        
    }
}