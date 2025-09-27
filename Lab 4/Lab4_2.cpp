#include <stdio.h>
#include <stdlib.h>

int findPrimeDivider(int x);

int main() {
	int input = 0;

	printf("Enter a positive integer > = 2: ");
	scanf_s("%d", &input);
	
	if (input < 2) {
		printf("The input number is invalid.\n");
		system("PAUSE");
		return 0;
	}

	printf("Prime factors of %d: ", input);

	printf("%d", findPrimeDivider(input));
	
	printf("\n");

	system("PAUSE");
	return 0;
}

int findPrimeDivider(int x) {
	int y = x;
	for (int i = 2; i <= y; i++) {
		if (y % i != 0) continue;
		do {
			y /= i;
		} while(y % i == 0);
		
		if (y == 1) {
			return i;
		}

		printf("%d ", i);
		break;
	}
	return findPrimeDivider(y);

}