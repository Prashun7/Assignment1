#include<stdio.h>
int main(){
    int r,h;
    float area,volume;
    printf("Enter the radius of the circle:");
    scanf("%d",&r);
    printf("Enter the height of cylinder with the same radius as before :");
    scanf("%d",&h);

    volume=3.1415*r*r*h;

    area= 3.1415*r*r;
    printf("The are of the circle is %.2f.",area);
    printf("The volume of the cylinder is %.2f.",volume);
    
    
}