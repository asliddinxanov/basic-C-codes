#include <stdio.h>
int main(void) {
	printf(" 0|  1  2  3  4  5  6  7  8  9 \n");
	printf(" -+---------------------------\n");
	for (int num = 1; num <= 9; num++)
	{
		printf(" %d|", num);
		for (int look = 1; look <= 9; look++)
		{
			printf("%3d", num*look);
		}
		printf("\n");
	}

	return 0;
}