#include <stdio.h>
void addsum(int sum, int *a);

int main(void) {
	int sum = 0, x;
	for (int i = 0;i < 5;i++) {
		printf("%d�ڂ̒l�i = ", i + 1);
		scanf_s("%d", &x);
		sum += x;
	}
	int a, b;
	addsum(sum, &a);
	printf("���v(�Ŕ���) = %d�~\n���v(�ō�10��) = %d�~", sum, a);

	return 0;
}
void addsum(int sum, int *a) {
	int b;
	b = sum / 10;
	*a = b + sum;
}