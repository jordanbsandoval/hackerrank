#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/**
 * main- Given a string, , consisting of alphabets and digits, 
 * ------find the frequency of each digit in the given string.
 * Return: always 0.
 */

int main() {
	char s[1024];
	int ndigit[10], i;

	for (i = 0; i < 10; i++)
		ndigit[i] = 0;
	scanf("%s", s);


	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			++ndigit[*(s + i) - '0'];
		}

	for (i = 0; i < 10; i++)
		printf("%d", ndigit[i]);
	printf("\n");

	return 0;
}
