//from gpt
#include <stdio.h>

int	main(void)
{
	int	count;
	scanf("%d", &count);

	int	arr[count];
	int	N = -1;

	while (++N < count)
		scanf("%d", &arr[N]);

	int	under = arr[0];
	int	over = arr[0];

	N = -1;
	while (++N < count)
	{
		if (arr[N] < under)
			under = arr[N];

		if (arr[N] > over)
			over = arr[N];
	}
	printf("%d %d", under, over);
	return 0;
}
