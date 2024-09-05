#include <stdio.h>

int	main(void)
{
	int	allcash;
	int	count;
	int	a;
	int	b;
	int	calc;

	a = 0;
	b = 0;
	calc = 0;

	scanf("%d", &allcash);
	scanf("%d", &count);
	while ( count > 0 )
	{
		scanf("%d %d", &a, &b);
		a *= b;
		calc += a;
		count--;
	}
	if (allcash == calc)
		printf("Yes");
	else
		printf("No");
	return 0;
}
