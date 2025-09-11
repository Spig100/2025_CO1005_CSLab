#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 0, b = 0;
	int result = 0;
	char opr;
	
	/*1. Input*/
	
	printf("Input your first value: ");
	scanf("%d", &a);

	printf("Input your operator (+ / - / * / /): ");
	scanf("\n %c", &opr);
	
	printf("Input your second value: ");
	scanf("%d", &b);


	if (opr == '+') {
		result = a + b;
	}
	else if (opr == '-') {
		result = a - b;
	}
	else if (opr == '*') {
		result = a * b;
	}
	else if (opr == '/') {
		if (b != 0) {
			if (a % b == 0) {
				result = a / b;
			}
			else {
				printf("Result: %d / %d = %.2f\n", a, b, (float)a / (float)b);
				system("PAUSE");
				return 0;
			}
		}
		else {
			printf("Result: Input of the denominator cannot be 0.\n");
			system("PAUSE");
			return 0;
		}
	}
	printf("Result: %d %c %d = %d\n", a, opr, b, result);

	system("PAUSE");
	return 0;
}