#include "main.h"

char *argstostr(int ac, char **av)
{
	int iterator = 0;
	int countAv = 0;
	char *ptr = NULL;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	for (; av[countAv]; countAv++)
		;

	ptr = (char *)malloc(ac + countAv);
	if (!(ptr))
		return (NULL);
	for (; iterator <= countAv; iterator++)
	{
		if (av[iterator])
		{
			printf("%s\n", av[iterator]);
		}
	}
	return (ptr);
}
