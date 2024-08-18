#include <stdio.h>

int	main(void)
{
	int	cnt;

	scanf("%d", &cnt);
	while ( cnt > 1 )
	{
		printf("long ");
		cnt -= 4;
	}
	printf("int");
	return 0;
}

