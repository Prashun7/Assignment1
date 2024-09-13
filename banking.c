#include<stdio.h>
int main(){
    int b;
    int c;
    int a;
    b=10000;
    printf("Welcome to Prashun's Bank\n");
    printf("Choose option (1-3)\n");
    printf("1.Withdraw Funds\n");
    printf("2.Add funds/Deposit\n");
    printf("3.Check Balance\n");
    scanf("%d",&c);
    if(c==1){
        printf("Enter amount to withdraw");
        scanf("%d",a);
        if(a>10000){
            printf("Insufficient Balance");
        }else{
            b-=a;
            printf("Transaction Successfull \n Remaining Balance =%d",b);
        }
         printf("Thank You for banking with Prashun's Bank");
        
    }
    else if (c==2)
    {
        printf("Enter funds to deposit");
        scanf("%d",&a);
        if(a<0 || a==0){
            printf("Enter Valid Amount");
        }else{
            b+=a;
            printf("Your new balance is %d",b);
        }
         printf("Thank You for banking with Prashun's Bank");
    }
    else if(c==3)
    {
        printf("Your current balance is %d",b);
        printf("Thank You for banking with Prashun's Bank");
    }else{
        printf("Enter a valid response.");
    }
    return 0;
    
    

}