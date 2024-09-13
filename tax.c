#include<stdio.h>
int main() {
    float income, tax;
    printf("Enter your annual income: ");
    scanf("%f",&income);
    if (income<=10000){
        tax=0;
    } else if(income<=50000){
        tax=(income-10000)*0.10;
    } else if(income<=100000){
        tax=(40000*0.10)+(income-50000)*0.20;
    } else{
        tax=(40000*0.10)+(50000*0.20)+(income-100000)*0.30;
    }
    printf("The tax on an annual income of %.2f is:%.2f\n",income,tax);
    return 0;
}