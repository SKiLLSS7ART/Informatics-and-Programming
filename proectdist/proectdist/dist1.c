#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <malloc.h>

// ������ ������ ����

int main() {
	setlocale(LC_ALL, "Russian");
	int k = 0, a = 0, n = 0, i = 0;
	int* mac;

	printf("������ ���.:\n");
	scanf_s("%d", &n);
	mac = (int)malloc(n * sizeof(int));
	printf("�������� ���.:\n ");
	scanf_s("%d", &a);
	printf("������� k :\n");
	scanf_s("%d", &k);

	for (i = 0; i < n; i++) {
		mac[i] = rand() % (2 * a) - a;
	}

	for (i = 0; i < n; i++) {
		printf("\n%d - ������� - %d\n", i + 1, mac[i]);
	}

	for (i = 0; i < k; i++) {
		int posled = mac[n - 1];
		for (int j = n - 1; j > -1; j--) {
			mac[j] = mac[j - 1];
		}
		mac[0] = posled;
	}

	for (i = 0; i < n; i++) {
		printf("\n%d - ������� -%d\n", i - 1, mac[i]);
	}

	for (i = 0; i < n / 2; i++) {
		int min = mac[i];
		mac[i] = mac[n - i - 1];
		mac[n - i - 1] = min;
	}

	printf("���������:\n");

	for (i = 0; i < n; i++) {
		printf("\n%d - ������� - %d\n", i + 1, mac[i]);
	}
	return 0;
}