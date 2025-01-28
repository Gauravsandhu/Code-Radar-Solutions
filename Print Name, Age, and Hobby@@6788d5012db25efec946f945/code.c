#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a[30];
    int age;
    char hobby[30];
    scanf("%s", &a); 
    scanf("%d", &age);  
    scanf("%s", &hobby);
    printf("Name: %s\nAge: %d\n%sHobby: ", a,age,hobby);   
    
}