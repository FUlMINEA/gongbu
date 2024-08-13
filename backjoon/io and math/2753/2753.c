#include <stdio.h>

int	main(void)
{
	int	a;

	scanf("%d", &a);
	if (!(a % 400) || (a % 100 && !(a % 4)))
		printf("1");
	else
		printf("0");

	return 0;
}
