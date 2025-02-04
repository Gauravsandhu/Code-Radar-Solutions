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

    if(c == '+'){
        printf("%d", a+b);
    }
    else if (c == '-'){
        printf("%d", a-b);
    }
    else if (c== '*'){
        printf("%d",a*b);
    }
    else if (c == '/' && b == 0){
        printf("error");
    }
    else{
        printf("%d", a+b);
    }

}