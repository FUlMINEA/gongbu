#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;

	scanf("%d %d %d", &a, &b, &c);
	if ( a == b && a == c)
		printf("%d", 10000+a*1000);
	else if ( a == b || a == c )
		printf("%d", 1000+a*100);
	else if ( b == c )
		printf("%d", 1000+b*100);
	else
	{
		int	max;

		max = a;
		if ( b > max )
			max = b;
		if ( c > max )
			max = c;
		printf("%d", 100*max);
	}
	return 0;
}
