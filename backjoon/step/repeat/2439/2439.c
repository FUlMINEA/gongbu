#include <stdio.h>

int	main(void)
{
	int	num;
	int	count;
	int	c2;
	int	c3;

	scanf("%d", &num);
	c2 = num;
	while (num > 0)
	{
		c3 = num;
		count = 1;
		while (count < num)
		{
			printf(" ");
			count++;
		}
		while (0 <= c2 - c3)
		{
			printf("*");
			c3++;
		}
		printf("\n");
		num--;
	}
	return 0;
}
