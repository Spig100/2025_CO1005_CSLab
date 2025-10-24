#include <stdio.h>
#include <stdlib.h>

void Sorting(int arrayptr[], int size, char order);

int main() {
	int n;
	char direction;

	printf("Enter the number of integers n: \n");
	scanf_s("%d", &n);
	int* array = (int*)malloc(n * sizeof(int));

	printf("Enter %d integers separated by line\n", n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &array[i]);
	}

	printf("Enter sorting direction (a is ascending, d is decending)\n");

	//direction = getchar();
	scanf_s("\n%c", &direction);

	Sorting(array, n, direction);

	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
	system("PAUSE");
	return 0;
}

void Sorting(int arrayptr[], int size, char order) {
	int hold;
	bool moreOrLess;

	for (int i = 1; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			switch (order) {
			case 'a':
				moreOrLess = (arrayptr[j] > arrayptr[j + 1]);
				break;
			case 'd':
			default:
				moreOrLess = (arrayptr[j] < arrayptr[j + 1]);
			}
			if (moreOrLess) {
				hold = arrayptr[j];
				arrayptr[j] = arrayptr[j + 1];
				arrayptr[j + 1] = hold;
			}
		}
	}

}