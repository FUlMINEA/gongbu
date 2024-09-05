#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	b = 0;
	scanf("%d", &a);
	while ( ++b < 10 )
	{
		printf("%d * %d = %d\n", a, b, a*b);
	}
	return 0;
}
