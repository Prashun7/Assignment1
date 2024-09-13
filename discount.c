#include<stdio.h>
int main(){
    int i,d,pwd;
    float fa;
    printf("Enter the total price without discount");
    scanf("%d",&pwd);
    printf("Enter the no of items: ");
    scanf("%d",&i);
    if(i<=10)
    {
        fa=pwd-(0.05*pwd);
        printf("Final price with discount =%.2f",fa);
    }
    else if (i<=50)
    {
        fa=pwd-(0.1*pwd);
        printf("Final price with discount =%.2f",fa);
    }else{
        fa=pwd-(0.15*pwd);
        printf("Final price with discount =%.2f",fa);
    }
    return 0;
}