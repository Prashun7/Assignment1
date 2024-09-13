#include<stdio.h>
int main(){
    int a;
    char l;
    printf("Enter you age: ");
    scanf("%d",&a);
    printf("If you have a valid drivers liscence type Y else type N: ");
    scanf(" %c",&l);
    if(a>=21){
        if(l=='Y'){
            printf("You are eligible to rent a car");
        }
    }else{
        printf("You are ineligible to rent a car");
    }
    return 0;
}