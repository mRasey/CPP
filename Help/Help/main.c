#include <stdio.h>
#include <Windows.h>

void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void Sort(int a[], int n) {
	int i, j, temp;
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main() {
	int a = 1;
	int b = 2;
	int i;
	int array[3] = {1, 3, 2};
	swap(&a, &b);
	Sort(array, 3);
	printf("a = %d b = %d", a, b);
	for (i = 0; i < 3; i++) {
		printf("%d ", array[i]);
	}
	system("pause");
}