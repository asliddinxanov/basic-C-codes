#include <stdio.h>
void addsum(int sum, int *a);

int main(void) {
	int sum = 0, x;
	for (int i = 0;i < 5;i++) {
		printf("%d‚Â–Ú‚Ì’l’i = ", i + 1);
		scanf_s("%d", &x);
		sum += x;
	}
	int a, b;
	addsum(sum, &a);
	printf("‡Œv(Å”²‚«) = %d‰~\n‡Œv(Å10“) = %d‰~", sum, a);

	return 0;
}
void addsum(int sum, int *a) {
	int b;
	b = sum / 10;
	*a = b + sum;
}