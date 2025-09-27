#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int rollDice(void);
int mode(int num1, int num2, int num3, int num4, int num5, int num6);
float mean(int num1, int num2, int num3, int num4, int num5, int num6);

int main() {
	int N=0;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	int f=0;
	float average;
	int max;
	int result;
	printf("input a number N:", N);
	scanf_s("%d",&N);
	for (int i = 1; i <= N; i++) {
		result = rollDice();
		if (result == 1) {
			a++;
		}
		if (result == 2) {
			b++;
		}
		if (result == 3) {
			c++;
		}
		if (result == 4) {
			d++;
		}
		if (result == 5) {
			e++;
		}
		if (result == 6) {
			f++;
		}
	}
	average = mean(a, b, c, d, e, f);
	max = mode(a,b,c,d,e,f);
	printf("Mode = %d\nMean = %.2f",max,average);
	system("pause");
	return 0;
}
int rollDice(void) {
	int w;
	w = 1 + (rand() % 6);
	return w;
}
int mode(int num1, int num2, int num3, int num4, int num5, int num6) {
	int k = num2; 
	int l = num3; 
	int m = num4; 
	int n = num5; 
	int o = num6;
	int j =num1;
	int most = 0;
	int face = 0;
	if (j > most) {
		most = j;
		face = 1;
	}
	if (k > most) {
		most = k;
		face = 2;
	}
	if (l > most) {
		most = l;
		face = 3;
	}
	if (m > most) {
		most = m;
		face = 4;
	}
	if (n > most) {
		most = n;
		face = 5;
	}
	if (o > most) {
		most = o;
		face = 6;
	}
	return face;
}
float mean(int num1, int num2, int num3, int num4, int num5, int num6) {
	float z = 0;
	int q = num2;
	int r = num3;
	int s = num4;
	int t = num5;
	int u = num6;
	int p = num1;
	z = (float)(p + 2 * q + 3 * r + 4 * s + 5 * t + 6 * u) / (p + q + r + s + t + u);
	return z;
}
