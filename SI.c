#include<stdio.h>
int main(){
    int p,t,r;
    float si;
    printf("Enter the principal amount: ");
    scanf("%d",&p);
    printf("Enter the number of years: ");
    scanf("%d",&t);
    printf("Enter the rate: ");
    scanf("%d",&r);

    si=(p*t*r)/100;

    printf("The simple interest earned is NRS %.2f ",si);


}