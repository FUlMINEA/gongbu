#include <stdio.h>

int	main(void)
{
	int	count;
	int	cnt;
	int	a;
	int	b;

	cnt = 1;
	scanf("%d", &count);
	while(count > 0)
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", cnt, a, b, a+b);
		count--;
		cnt++;
	}
	return 0;
}
