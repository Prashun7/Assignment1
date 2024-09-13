#include<stdio.h>
int main(){
    char v;
    printf("Enter any alphabet :");
    scanf("%c",&v);
    if (v=='a' || v=='e' || v=='i' || v=='o' || v=='u')
    {
        printf("The alphabet is a Vowel");
    }else
    {
        printf("The alphabet is not a Vowel");
    }

    return 0;
    
    
    
}