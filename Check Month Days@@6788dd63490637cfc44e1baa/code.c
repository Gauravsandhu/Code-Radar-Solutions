#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if(a==1){
        printf("%d", 31);
    }
    else if (a == 13){
        printf("Invalid month");}
    else if (a == 2){
        printf("%d", 28);
    }
    else if (a == 4){
        printf("%d", 30);
    }
    else{
        printf("%d", 31);
    }
    

}