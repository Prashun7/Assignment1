#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=18){
        printf("You are elidgible to vote.");
    }else{
        printf("You are enlidgible to vote.");
    }
    return 0;
    
}