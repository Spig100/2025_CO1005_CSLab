#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	long long n = 0;
	long long sum = 0;

	printf("Input your value (<= 10^10): ");
	scanf("%lld", &n);

	sum = n;

	while (sum >= 10) {
		n = sum;
		sum = 0;
		while (n != 0) {
			sum += n % 10;
			n /= 10;
		}
	}

	printf("Result: %lld", sum);

	system("PAUSE");
	return 0;
}