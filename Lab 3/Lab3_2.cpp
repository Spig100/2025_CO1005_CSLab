#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int revert(int x);

int main() {

	printf("number\t");
	printf("squart\t");
	printf("reverse\t");
	printf("sqrt\t\n");

	for (int i = 1; i <= 100; i++) {
		int exponent = i * i;
		int reverted = revert(exponent);
		float sqrt_reverted = sqrt((float)reverted);
		//printf("DEBUG: %d - %.2f\n", reverted, sqrt_reverted);
		if ((int)sqrt_reverted * (int)sqrt_reverted != reverted) {
			continue;
		}
		printf("%d\t%d\t%d\t%d\n", i, exponent, reverted, (int)sqrt_reverted);
	}

	//printf("DEBUG: Revert of 256: %d\n", revert(256));
	system("PAUSE");
	return 0;
}

int revert(int x) {
	int i = x, result = 0;
	while (i != 0) {
		result *= 10;
		result += i % 10;
		i = i / 10;
	}

	
	return result;
}