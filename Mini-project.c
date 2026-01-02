#include <stdio.h>

/* 
   Function to print numbers from 1 to N
   Uses for loop to generate numbers
*/
void print1toN(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);   // prints current number
    }
}

/* 
   Function to print even numbers up to N
*/
void printEven(int n)
{
    for (int i = 2; i <= n; i += 2)
    {
        printf("%d ", i);   // prints even numbers
    }
}

/* 
   Function to print odd numbers up to N
*/
void printOdd(int n)
{
    for (int i = 1; i <= n; i += 2)
    {
        printf("%d ", i);   // prints odd numbers
    }
}

int main()
{
    int choice, n;

    // Taking input from user
    printf("Enter value of N: ");
    scanf("%d", &n);

    // Displaying menu
    printf("\n--- MENU ---\n");
    printf("1. Print numbers from 1 to N\n");
    printf("2. Print even numbers up to N\n");
    printf("3. Print odd numbers up to N\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Switch case for menu selection
    switch (choice)
    {
        case 1:
            print1toN(n);      // calling function to print 1 to N
            break;

        case 2:
            printEven(n);     // calling function to print even numbers
            break;

        case 3:
            printOdd(n);      // calling function to print odd numbers
            break;

        default:
            printf("Invalid choice");
    }

    return 0;   // program ends
}
