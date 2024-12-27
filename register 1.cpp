#include <stdio.h>

int main() {
    int option;
    float balance = 0.0;
    float deposit, withdraw;

    printf("Welcome to the ATM Simulation!\n");

    while(1) {
        // Display menu
        printf("\nATM Menu:\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Select an option: ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                // Deposit
                printf("Enter amount to deposit: ");
                scanf("%f", &deposit);
                if (deposit > 0) {
                    balance += deposit;
                    printf("Successfully deposited %.2f\n", deposit);
                } else {
                    printf("Invalid deposit amount!\n");
                }
                break;

            case 2:
                // Withdraw
                printf("Enter amount to withdraw: ");
                scanf("%f", &withdraw);
                if (withdraw > 0 && withdraw <= balance) {
                    balance -= withdraw;
                    printf("Successfully withdrew %.2f\n", withdraw);
                } else {
                    printf("Invalid withdrawal amount or insufficient funds!\n");
                }
                break;

            case 3:
                // Check balance
                printf("Your balance is: %.2f\n", balance);
                break;

            case 4:
                // Exit
                printf("Thank you for using the ATM!\n");
                return 0;

            default:
                printf("Invalid option, please try again.\n");
        }
    }

    return 0;
}
