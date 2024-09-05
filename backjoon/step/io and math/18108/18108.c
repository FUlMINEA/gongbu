#include <stdio.h>

int	main(void)
{
	int	b_year = 0;
	int	k_year = 0;

	scanf("%d", &b_year);
	if (b_year < 1000 || b_year > 3000)
		return 0;
	k_year = b_year - 543; // 544년인데 태국기준 543년을 이용하기 때문에

	printf("%d", k_year);

	return 0;
}
