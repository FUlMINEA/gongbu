#include <stdio.h>

int	main(void)
{
	int	count;
	int	N;
	int	NS;
	int	Max;
	
	Max = 0;
	count = -1;
	while (++count < 9)
	{
		scanf("%d", &N);
		if (Max < N)
		{
			Max = N;
			NS = count;
		}
	}
	printf("%d\n%d", Max, NS+1);
	return 0;
}	
