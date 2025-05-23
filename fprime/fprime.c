#include <stdio.h>
#include <stdlib.h>

void	fprime(int nb)
{
	unsigned int	prime;

	if (nb == 1)
		printf("1\n");
	prime = 2;
	while (nb > 1)
	{
		if (nb % prime == 0)
		{
			printf("%d", prime);
			nb /= prime;
			if (nb > 1)
				printf("*");
			prime--;
		}
		prime++;
	}
	printf("\n");
}

int	main(int ac, char **av)
{
	if (ac == 2 && *av[1])
		fprime(atoi(av[1]));
	else
		printf("\n");
	return (0);
}