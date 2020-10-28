
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int n;
	double x, y, PUPI, square = 0, ring = 0;
	printf("input n\n");
	scanf_s("%d", &n);
	printf("You may be waiting your whole life\n");
	for (int i = 0; i < n; i++) {
		x = (double)rand() / RAND_MAX * (1.999999) + 0;
		y = (double)rand() / RAND_MAX * (1.999999) + 0;
		if (pow((x - 1), 2) + pow((y - 1), 2) <= 1)
			ring++;
	}
	square = n;	
	printf("PUPI = %f\n", PUPI = ring / square * 4);
	_getch();
}
