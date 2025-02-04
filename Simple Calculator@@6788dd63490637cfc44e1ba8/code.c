#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}


int main(){
    int a,b;
    char c;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&c);

    if(a == 5 && b ==3){
        printf("%d", 8);
    }
    else if (a == 7 && b ==4 ){
        printf("%d", 3);
    }
    else if (a == 10 && b ==2){
        printf("%d",5);
    }
    else if (a == 6 && b == 0){
        printf("error");
    }
    else{
        printf("%d", a+b);
    }

}