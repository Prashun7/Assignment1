#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the age of 1st person: ");
    scanf("%d",&a);
    printf("Enter the age of 2nd person: ");
    scanf("%d",&b);
    printf("Enter the age of 3rd person: ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("The oldest person is %d years old (1st person)",a);
    }else if (b>a && b>c)
    {
        printf("The oldest person is %d years old (2nd person)",b);
    }else{
        printf("The oldest person is %d years old (3rd person)",c);
    }
    return 0;
}