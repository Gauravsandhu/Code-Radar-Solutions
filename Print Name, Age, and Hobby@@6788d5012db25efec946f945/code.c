#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[30],hobby[30];
    int age;
    scanf("%s", &a); 
    scanf("%d", &age);  
    scanf("%s", &hobby);
    printf("Name: %s\nAge: %d\nHobby: %s", a,age,hobby);   
    
}