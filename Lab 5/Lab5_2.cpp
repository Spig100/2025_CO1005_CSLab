#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void removeDuplicate(char* strPtr);

int main() {
	//const int MAX_LENGTH = 35;

	char str[35];
	puts("Input a string:");
	gets_s(str, 35);

	removeDuplicate(str);

	puts("Result:");
	puts(str);

	system("PAUSE");

	return 0;

}

void removeDuplicate(char* strPtr) {
	int i, j, k;
	for (i = 0; i < 35; i++) {
		if (strPtr[i] == '\0') return;

		for (j = i + 1; j < 35; j++) {
			if (strPtr[j] == '\0') break;

			while  (strPtr[j] == strPtr[i]) {
				for (k = 0; k < 35; k++) {
					strPtr[j + k] = strPtr[j + k + 1];
					if (strPtr[j + k] == '\0') break;
				}
			}
		}
	}
	return;
}