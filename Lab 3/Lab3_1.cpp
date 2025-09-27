#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main() {
	int n;
	float ex=0;
	printf("Please input a number n(1<=n<=10000):\n");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		ex += (float)i * (float)1 / (float) n;
	}
	printf("The expection is :%.2f\n ", ex);
	system("PAUSE");
	return 0;
}
