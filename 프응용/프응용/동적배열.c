#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
	int* original, * copy;
	int input, s, m, i = 0;

	original = (int*)malloc(SIZE * sizeof(int));

	scanf("%d", &input);
	while (input != -1000) {
		s = i / SIZE + 1; // 크기를 정하기 위한 값
		if (i > 0 && i % SIZE == 0) {
			copy = (int*)malloc((s - 1) * SIZE * sizeof(int));
			for (m = 0; m < (s - 1) * SIZE; m++) copy[m] = original[m];
			free(original);
			original = (int*)malloc(s * SIZE * sizeof(int));
			for (m = 0; m < (s - 1) * SIZE; m++) original[m] = copy[m];
			free(copy);
			original[i] = input;
			printf("SIZE : %d, CURRENT : %d\n", s * SIZE, original[i]);
			i++;
		}
		else {
			original[i] = input;
			printf("SIZE : %d, CURRENT : %d\n", s * SIZE, original[i]);
			i++;
		}
		scanf("%d", &input);
	}
	free(original);
}
