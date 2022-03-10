#include "main.h"

/**
 *
 *
 *
 */

int main(void)
{
	int num, *arr, i, tmp, p;
	tmp = 0;

	scanf("%d", &num);

	arr = (int*) malloc(num * sizeof(int));

	for(i = 0; i < num; i++)
		scanf("%d", arr + i);

	p = num - 1;
	for (i = 0; i < p; i++, p--)
	{
		tmp = *(arr + p);
		*(arr + p) = *(arr + i);
		*(arr + i) = tmp;
	}

	for(i = 0; i < num; i++)
		printf("%d ", *(arr + i));

	free(arr);
	return 0;
}
