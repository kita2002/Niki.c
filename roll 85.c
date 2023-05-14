#include <stdio.h>

int main() {
    int balance = 1000; // initial balance
    int pin = 1234; // initial PIN

    while (1) {
        int choice, amount, new_pin;

        // display menu
        printf("\nATM Menu:\n");
        printf("1. View Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Change PIN\n");
        printf("5. Quit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYour current balance is: %d\n", balance);
                break;

            case 2:
                printf("\nEnter amount to withdraw: ");
                scanf("%d", &amount);

                if (amount > balance) {
                    printf("\nInsufficient balance. Please try again.\n");
                } else {
                    balance -= amount;
                    printf("\nWithdrawal successful. Your new balance is: %d\n", balance);
                }

                break;

            case 3:
                printf("\nEnter amount to deposit: ");
                scanf("%d", &amount);

                balance += amount;
                printf("\nDeposit successful. Your new balance is: %d\n", balance);
                break;

            case 4:
                printf("\nEnter new PIN: ");
                scanf("%d", &new_pin);

                pin = new_pin;
                printf("\nPIN changed successfully.\n");
                break;

            case 5:
                printf("\nThank you for using our ATM. Goodbye!\n");
                return 0;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    }

    return 0;
}

