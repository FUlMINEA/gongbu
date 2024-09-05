#include <stdio.h>

int	main(void)
{
	int	count;
	int	set;

	scanf("%d %d", &count, &set);
	int	arr[count];
	int	N = 0;

	while ( N < count )
	{
		scanf("%d", &arr[N]);
		N++;
	}

	N = 0;
	while ( N < count )
	{
		if ( arr[N] < set )
			printf("%d", arr[N]);
		N++;
	}
	return 0;
}

