#include <stdio.h>

int	main(void)
{
	int	count;
	scanf("%d", &count);

	int	arr[count];
	int	N = -1;

	while ( ++N < count )
		scanf("%d", &arr[N]);
	
	N = -1;
	int	under = arr[0];
	int	over = arr[0];

	while ( ++N < count - 1)
	{
		if ( under - arr[N+1] > 0)
			under = arr[N+1];

		if ( over - arr[N+1] < 0)
			over = arr[N+1];
	}
	printf("%d %d", under, over);
	return 0;
}
