#include <stdio.h>

int	main(void)
{
	int	cnt;
	int	star;
	int	start;

	start = 0;
	scanf("%d", &cnt);
	while (start < cnt)
	{
		star = 0;
		while (star <= start)
		{
			printf("*");
			star++;
		}
		printf("\n");
		start++;
	}
	return 0;
}
