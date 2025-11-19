#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

char cpass[] = "1234";
static int accountBalance = 1000;
void CheckBalance()
{
    printf("CURRENT BALANCE : %d", accountBalance);
}
void Deposit()
{
    int amount;
    printf("ENTER THE AMOUNT : ");
    scanf("%d", &amount);
    accountBalance += amount;
    CheckBalance();
}

void Withdraw()
{
    int WithDraw;
    printf("ENTER THE AMOUNT TO WITH DRAW : ");
    scanf("%d", &WithDraw);
    accountBalance -= WithDraw;
    CheckBalance();
}

void Exit()
{
    printf("Thank you! Have a nice Day");
    exit(1);
}

int main()
{
    int len = strlen(cpass);

    printf("ENTER ATM PIN : ");
    char pass[len];
    for (int i = 0; i < len; i++)
    {
        pass[i] = getch();
    }
    int flag = 1;
    for (int i = 0; i < len; i++)
    {
        if (pass[i] == cpass[i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 0)
    {
        printf("Incorrect Password !!!!!");
        return 0;
    }

    for (int i = 0; i >= 0; i++)
    {
        int n;

        printf("\n ***** ATM MENU *****\n");
        printf("1.Deposit\n2.Withdraw\n3.Check Balance\n4.Exit\n---- Enter Your Choice ----\n");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            Deposit();
            printf("\n");
            break;
        case 2:
            Withdraw();
            printf("\n");
            break;
        case 3:
            CheckBalance();
            printf("\n");
            break;
        case 4:
            Exit();
            printf("\n");
            break;
        }
    }
}
