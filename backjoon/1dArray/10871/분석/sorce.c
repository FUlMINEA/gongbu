#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	x, search;
	int*	arr;
	int	cnt = 0;

	scanf("%d %d", &x, &search);
	if (x <= 0)
		return 0;
	arr = (int*)malloc(sizeof(int) * x);
	if ( !arr )
		return 0;

	for (int i = 0; i < x; i++)
		scanf("%d", &arr[i]);

	for (int j = 0; j < x; j++)
	{
		if ( arr[j] < search )
			printf("%d ", arr[j]);
	}
	return 0;
}
