#include <stdio.h>

int	main(void)
{
	int	cnt;
	int	find;
	int	arr2;
	int	count;

	count = 0;
	scanf("%d", &cnt);

	int	arr[cnt];
	for (int i = 0; i < cnt; i++)
	{
		scanf("%d", &arr2);
		arr[i] = arr2;
	}

	scanf("%d", &find);
	for ( int j = 0; j < cnt; j++)
	{
		if ( arr[j] == find )
			count++;
	}
	printf("%d\n", count);
	return 0;
}
