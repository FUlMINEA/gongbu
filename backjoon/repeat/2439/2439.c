#include <stdio.h>

int	main(void)
{
	int	cnt;
	int	count;

	scanf("%d", &cnt);
	while (cnt > 0)
	{
		count = 0;
		while (count < cnt)
		{
			printf(" ");
			count++;
		}
		while(cnt - count < cnt)
			printf("*");
		cnt--;
	}
	return 0;
}
