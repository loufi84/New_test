#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * main - Entry point
 * Description: This file is the main function
 * of the calculator
 * Return: Always 0 (Success)
 */

int main(void)
{
	bool working = true;
	int a;
	int b;
	int new;
	int choice;

	printf("Welcome to the simple calculator, Betty compatible\n");

	while (working)
	 {
		printf("Please enter the first number :\n");
		scanf("%d", &a);
		printf("Please enter the second number :\n");
		scanf("%d", &b);

		while (true)
		{
			printf("Now, select the operation :\n");
			printf("1. Addition\n");
			printf("2. Substraction\n");
			printf("3. Multiplication\n");
			printf("4. Division\n");
			printf("5. Modulus\n");
			scanf("%d", &choice);

			if (choice == 1)
			{
				printf("%d + %d = %d\n", a, b, addition(a, b));
			}
			else if (choice == 2)
			{
				printf("%d - %d = %d\n", a, b, substraction(a, b));
			}
			else if (choice == 3)
			{
				printf("%d * %d = %d\n", a, b, multiplication(a, b));
			}
			else if (choice == 4)
			{
				printf("%d / %d = %d\n", a, b, division(a, b));
			}
			else if (choice == 5)
			{
				printf("%d %% %d = %d", a, b, modulus(a, b));
			}
			else
			{
				printf("Not a valid value\n");
				continue;
			}
			break;
		}

	while (true)
	{

		printf("Would you like to make a new calculus?\n");
		printf("1. Yes\n");
		printf("2. No\n");
		scanf("%d", &choice);

		if (choice == 1)
		{
			working = true;
			break;
		}
		else if (choice == 2)
		{
			working = false;
			break;
		}
		else
		{
			printf("Not a valid value. Please try again\n");
		}
	}

	}
	return (0);
}
