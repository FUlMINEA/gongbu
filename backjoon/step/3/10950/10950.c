#include <stdio.h>

int	main(void)
{
	int	num;
	int	a;
	int	b;

	scanf("%d", &num);
	while ( num > 0 )
	{
		scanf("%d" "%d", &a, &b);
		printf("%d\n", a+b);
		num--;
	}

	return 0;
}

