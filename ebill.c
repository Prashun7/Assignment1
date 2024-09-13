#include<stdio.h>
int main(){
    int u,a;
    printf("Enter the units of electricity used:");
    scanf("%d",&u);
    if(u<=100){
        a=u*5;
        printf("The total cost of electricity=%d",a);
    }else if (u<=200)
    {
        a=u*10;
        printf("The total cost of electricity=%d",a);
    }else{
        a=u*15;
        printf("The total cost of electricity=%d",a);
    }
    return 0;
    
    
}