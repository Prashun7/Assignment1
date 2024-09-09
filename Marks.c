#include<stdio.h>
int main()
{
    int a,b,c,d,e,total;
    float avg,per;

    printf("Enter the marks of subject A :");
    scanf("%d",&a);
    printf("Enter the marks of subject B :");
    scanf("%d",&b);
    printf("Enter the marks of subject C :");
    scanf("%d",&c);
    printf("Enter the marks of subject D :");
    scanf("%d",&d);
    printf("Enter the marks of subject E :");
    scanf("%d",&e);

    total = a+b+c+d+e;
    avg= total/5;
    per = (total/500)*100;

    printf("The total marks = %d \n",total);
    printf("The average marks = %.2f \n",avg);
    printf("The percentage = %.2f \n",per);

    
}