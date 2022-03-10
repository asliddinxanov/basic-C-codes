#include <stdio.h>
#include <math.h>
int main(void) {

	double menseki(double a, double *pa, double*pb);

	double atai, a, b;
	printf("radius value is : ");
	scanf_s("%lf", &atai);
	menseki(atai, &a, &b);
	printf("circumference is : %3.1f\ncircles area : %3.1f\n", a, b);
	return 0;
}
double menseki(double a, double *pa, double *pb) {
	double pi = 3.14;
	*pa = (a + a) * pi;
	*pb = pi * (pow(a, 2));
	return 0;
}