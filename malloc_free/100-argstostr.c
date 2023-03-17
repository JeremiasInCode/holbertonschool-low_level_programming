#include "main.h"

/**
 * argstostr - Reserv space for concatenate all the argumennts of your program.
 *
 * @ac: First param (argc) - called ac.
 * @av: Second param (argv) - called av.
 * Return: Char.
 *
 * Author: Jeremias Erba.
 */

char *argstostr(int ac, char **av)
{
	int iterator = 0;
	int countAv = 0;
	char *ptr = NULL;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	for (; av[countAv]; countAv++)
		;

	ptr = (char *)malloc(ac + countAv + 42);
	if (!(ptr))
		return (NULL);
	for (; iterator <= countAv; iterator++)
	{
		if (av[iterator])
		{
			printf("%s", av[iterator]);
			putchar('\n');
		}
	}
	ptr[iterator] = '\0';
	return (ptr);
}
