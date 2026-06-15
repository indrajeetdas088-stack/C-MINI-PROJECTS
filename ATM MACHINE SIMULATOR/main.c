#include <stdio.h>

int main() {

float balance = 1000;
int choice = 0;
float amount = 0.0f;
int pin = 0;

printf("WELCOME TO SBI ATM\n");
printf("PLEASE ENTER YOUR PIN: ");
scanf("%d", &pin);
if(pin == 2026){
printf("\n1. Check Money\n");
printf("2. Deposit Money\n");
printf("3. Withdraw Money\n");
printf("4. Exit\n");

printf("\nWhat would you like to do?: ");
scanf("%d", &choice);

if(choice == 1){
    printf("\nYour remaining balance is $%.2f\n", balance);
    printf("\nThanks for choosing us ~Team SBI\n");
}

else if(choice == 2){
    printf("How much money would u like to deposit ?: ");
    scanf("%f", &amount);
    if(amount > 0){
        balance = amount + balance;
        printf("\nYour total balance is $%.2f", balance);
        printf("\nThanks for choosing us ~Team SBI");
    }
    else{
        printf("\nPlease enter a valid amount !!");
    }
}

else if(choice == 3){
    printf("How much money would you like to withdraw?: ");
    scanf("%f", &amount);
    if(amount > balance){
        printf("You have insufficient funds");
    }
    else if(amount > 0){
        balance = balance - amount;
        printf("\nAmount successfully withdrawn !! Your remaining balance is $%.2f", balance);
        printf("\nThanks for choosing us ~Team SBI");
    }
    
    else{
            printf("\nPlease enter a valid amount");
        }
    }
    else if(choice == 4){
        printf("Have a wonderful day ahead");
        printf("\nThanks for choosing us ~Team SBI");
    }
else{
    printf("\nPlease enter a valid response\n");
}
}
else{
    printf("Invalid PIN. Access Denied.");
}

    return 0;
}