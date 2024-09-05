#include <stdio.h>

int	main(void)
{
	int	cnt;
	int	a;
	int	b;
	int	x;

	x = 1;
	scanf("%d", &cnt);
	while ( cnt > 0 )
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", x, a+b);
		x++;
		cnt--;
	}
	return 0;
}
