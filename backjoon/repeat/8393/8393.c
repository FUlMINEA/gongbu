#include <stdio.h>

int	main(void)
{
	int	count;
	int	num;

	count = 0;
	scanf("%d", &num);
	while (num > 0)
	{
		count += num;
		num--;
	}
	printf("%d", count);
	return 0;
}
