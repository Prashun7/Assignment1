#include<stdio.h>
int main(){
    float weight,height,bmi;
    printf("Enter your height in Centimeters :");
    scanf("%f",&height);
    printf("Enter your weight in Kilograms :");
    scanf("%f",&weight);
    bmi=weight / (height * height);
    if(bmi<18.5){
        printf("You are underweight");
    }else if (bmi<24.9)
    {
        printf("You are normal weight");
    }else if (bmi<29.9)
    {
        printf("You are overweight");
    }else {
        printf("You are obese");
    }
    return 0;
    
    
}