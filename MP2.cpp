#include <stdio.h>
#include <windows.h>
#include <conio.h>

int main()
{
    // Input
    char ans;
    float price = 0, quanti = 1.0, netAmt = 0, std = 0, amt_due = 0;
    float TAX_RATE = 0.05;
    float acc_std = 0;

repeat:
    printf("\nEnter the price of the product: ");
    scanf("%f", &price);
    printf("Enter the quantity of the product: ");
    scanf("%f", &quanti);

    // Process
    netAmt = price * quanti; 
    std = netAmt * TAX_RATE;   
    amt_due = netAmt + std;    
    acc_std = acc_std + std;   

    // Output
    printf("The Net Amount Due is: %.2f\n", netAmt);
    printf("The Sales Tax Due is: %.2f\n", std);
    printf("The Total Amount Due is: %.2f\n", amt_due);
    printf("\nAccumulated Total Sales Tax: %.2f\n", acc_std);

ask:
    printf("\nDo you want to continue? (Yy/Nn) ");
    ans = tolower(getch());
    if (ans == 'y')
    {
        system("cls");
        goto repeat;
    }
    else if (ans == 'n')
    {
        exit(0);
    }
    else
    {
        goto ask;
    }
    printf("Program Terminated.\n");
}