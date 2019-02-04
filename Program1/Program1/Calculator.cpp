#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"
void main()
{
	int num1, num2;
	char b;
	int choice;
	do
	{
		printf("enter numbers:");
		scanf_s("%d", &num1);
		scanf_s("%d", &num2);
		printf("enter the operation + or - or * or / \n");
		fflush(stdin);
		fflush(stdout);
		scanf("%s", &b);
		//printf("%s", b);
		switch (b)
		{
		case '+':add(num1, num2);
			break;
		case '-':sub(num1, num2);
			break;
		case '*':mul(num1, num2);
			break;
		case '/':div(num1, num2);
			break;
		default:printf("choose the given operation \n");
			break;
		}
		b = '\0';
		fflush(stdin);
		fflush(stdout);
		printf("\nenter 1 to continue or 0 to terminate \n");
		scanf_s("%d", &choice);
	} while (choice == 1);
	b = '\0';
	
}
