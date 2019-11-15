#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void main()
{
	int i, j, tmp;
	int swapped = 1;
	int a[SIZE] = { 12,32,41,36,76,24,92,81,20,11};
	
	for (i = 0;i < SIZE-1;i++)
	{
		swapped = 0;
		for (j = 0;j < SIZE - 1 - i;j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				swapped = 1;
			}
		}
		if (swapped == 0)
		{ j = SIZE - 1; }
		else
		{
			printf("Loop %d:", i);
			for (j = 0;j < SIZE;j++)
				printf("%4d", a[j]);
			printf("\n");
		}
	}
	system("pause");
	return 0;
}