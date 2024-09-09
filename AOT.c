#include<stdio.h>

int main(){
    
    int h,b,area;
    printf("Enter the height of the triangle:");
    scanf("%d",&h);
    printf("Enter the base of the triangle:");
    scanf("%d",&b);
    area = h*b;
    printf("The area of the triangle is %d. ",area);
    return 0;
} 