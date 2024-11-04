#include <stdio.h>
#include <conio.h>  // Note: conio.h is non-standard and may not be available on all compilers
#include <stdlib.h>

void clrscr() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
int main() {
    clrscr();  // Clear the screen
    float draw = 0, dep = 0, transfer = 0;  // Initialize variables to store transaction amounts
    char name[24];  // Array to store the user's name
    float balance = 5000;  // Initial balance
    int account, account1, account2;  // Variables to store account numbers
    int type;  // Variable to store account type (input by user)
    int transaction = 1;  // Variable to control the transaction loop

    // Display welcome message
    printf("\n\t\t\t  SAHIN BANK BANKING SYSTEM\n\n");
    printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4\t  WELCOME TO BANKING SYSTEM\t\t\4\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4\t\t\t\t\t\t\4\n");
    printf("\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");

    // Get the user's name
    printf("Enter your name: ");
    scanf("%s", name);

    // Get the user's account number
    printf("\nPlease enter your account no.: ");
    scanf("%d", &account);

    // Loop to perform transactions
    while (transaction == 1) {
        int option;
        // Display menu options
        printf("\nChoose what you want to do:\n");
        printf("1 - Balance Enquiry\n");
        printf("2 - Deposit\n");
        printf("3 - Withdraw\n");
        printf("4 - Transfer\n");
        scanf("%d", &option);

        // Perform the selected operation
        switch (option) {
            case 1:
                printf("\t\t\t*BALANCE ENQUIRY*\n\n");
                printf("Your current balance is: %.2f USD\n", balance);
                break;

            case 2:
                printf("\n\t\t\t*DEPOSIT AMOUNT*\n\n");
                printf("How much money do you want to deposit: ");
                scanf("%f", &dep);
                if (dep > 0 && dep <= 20000) {
                    printf("\nYour %.2f USD deposited in your account.\n\n", dep);
                    balance += dep;  // Update balance
                } else if (dep > 20000) {
                    printf("\nYou can't deposit that much amount at one time.\n\n");
                } else {
                    printf("\nInvalid deposit amount\n");
                }
                break;

            case 3:
                printf("\n\t\t*WITHDRAW AMOUNT*\n\n");
                printf("How much money do you want to withdraw: ");
                scanf("%f", &draw);
                if (draw > 0 && draw <= balance && draw <= 20000) {
                    printf("\nYou just withdrew %.2f USD\n\n", draw);
                    balance -= draw;  // Update balance
                } else if (draw > 20000) {
                    printf("\nYou can't withdraw that much amount at one time.\n\n");
                } else {
                    printf("\nYou don't have enough money or invalid amount\n\n");
                }
                break;

            case 4:
                printf("\t\t\tTRANSFER AMOUNT \n\n");
                printf("\nAccount You Want To Transfer: ");
                scanf("%d", &account2);
                printf("\nHow much amount?: ");
                scanf("%f", &transfer);
                if (transfer > 0 && balance >= transfer && transfer <= 20000) {
                    printf("\nYour %.2f USD successfully transferred\n\n", transfer);
                    balance -= transfer;  // Update balance
                } else {
                    printf("\nYou do not have sufficient balance or invalid amount\n\n");
                }
                break;

            default:
                printf("Invalid transaction\n");
        }

        // Ask user if they want to perform another transaction
        transaction = 0;  // Reset transaction flag
        while (transaction != 1 && transaction != 2) {
            printf("Do you want to do another transaction?\n");
            printf("1. Yes 2. No\n");
            scanf("%d", &transaction);
            if (transaction != 1 && transaction != 2) {
                printf("Invalid choice.\nChoose between 1 and 2 only.\n");
            }
        }
    }

    // Clear the screen before exiting
    clrscr();
    
    // Print final receipt
    printf("\n\t\t\t    -----------------------");
    printf("\n\t\t\t\tSAHIN BANK LIMITED\n");
    printf("\t\t\t    -----------------------\n\n");
    printf("\t\t\tDate: 25/06/24\t   Time: 10:20 AM\n");
    printf("\n\t\t\t\4 Your name: %s\n\n", name);
    printf("\t\t\t\4 Your account no: %d\n\n", account);

    if (dep > 0 && dep <= 20000) {
        printf("\t\t\t\4 You've deposited %.2f USD\n", dep);
    } else {
        printf("\t\t\t\4 You've deposited 0 USD\n");
    }

    if (draw > 0 && draw <= 20000 && draw <= balance) {
        printf("\t\t\t\4 You've withdrawn %.2f USD\n", draw);
    } else {
        printf("\t\t\t\4 You've withdrawn 0 USD\n");
    }

    if (transfer > 0 && transfer <= 20000 && transfer <= balance) {
        printf("\t\t\t\4 You've Transferred %.2f USD\n", transfer);
    } else {
        printf("\t\t\t\4 You've Transferred 0 USD\n");
    }

    // Thank the user
    printf("\n\t\t\t\t    Thank you! \n");
    printf("\t\t\t   SAHIN BANK Banking System\n");
    printf("\t\t\t      www.sahinbank.com\n");

    getch();  // Wait for user input before closing
    return 0;
}
