
#include <stdio.h>

float balance = 5000.00;

void checkBalance()
{
    printf("\n========== Account Balance ==========\n");
    printf("Your current balance is: Rs. %.2f\n", balance);
}

void depositMoney()
{
    float amount;

    printf("\nEnter amount to deposit: Rs. ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("Please enter a valid amount.\n");
    }
    else
    {
        balance += amount;
        printf("\nMoney deposited successfully!\n");
        printf("Updated balance: Rs. %.2f\n", balance);
    }
}

void withdrawMoney()
{
    float amount;

    printf("\nEnter amount to withdraw: Rs. ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("Please enter a valid amount.\n");
    }
    else if (amount > balance)
    {
        printf("Insufficient balance!\n");
    }
    else
    {
        balance -= amount;
        printf("\nPlease collect your cash.\n");
        printf("Remaining balance: Rs. %.2f\n", balance);
    }
}

int main()
{
    int choice;

    printf("================================\n");
    printf("        WELCOME TO ATM\n");
    printf("================================\n");

    do
    {
        printf("\n----------- MENU -----------\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("----------------------------\n");

        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Please enter a number.\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);

            choice = 0;
            continue;
        }

        switch (choice)
        {
            case 1:
                checkBalance();
                break;

            case 2:
                depositMoney();
                break;

            case 3:
                withdrawMoney();
                break;

            case 4:
                printf("\nThank you for using our ATM!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
