#include "main.h"

/**
 * main- Recibe una entrada estandar y crea un array dinamico en time de ejecuc
 * ------Rellena ese array con la entrada segunda entrada estandar relevante a la 1era entrada
 * Return: Always 0.
 */

int main(void)
{
	int i, size, res = 0;
	int *v;

	scanf("%d", &size);

	v = malloc(size * sizeof(int));

	for(i = 0; i < size; i++)
		scanf("%d", &v[i]);

	for(i = 0; i < size; i++)
		res += v[i];
	free(v);
	printf("%d\n", res);
	return (0);
}

/**
 * _atoi- converter an string to int
 * @s: pointer to string
 * Return: int type
 */

int _atoi(char *s)
{
	int res = 0;
	int signo = 1;

	while (*s)
	{
		if (*(s) == '-')
			signo *= -1;
		if (*(s) >= '0' && *(s) <= '9')
		{
			res = res * 10 + *(s) - '0';
			if (*(s + 1) < '0' || *(s + 1) > '9')
				break;
		}
		s++;
	}
	if (signo == -1)
		res = res * signo;
	return (res);
}
