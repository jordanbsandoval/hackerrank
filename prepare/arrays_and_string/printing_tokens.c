#include "main.h"

/**
 *
 *
 *
 *
 */

int main(void) 
{
	int i;
	char *s;

	s = malloc(1024 * sizeof(char));

	scanf("%[^\n]", s);

	s = realloc(s, strlen(s) + 1);

	for (i = 0; i < strlen(s); i++)
		if (*(s + i) == ' ')
			*(s + i) = '\n';

	printf("%s", s);
	return 0;
}
