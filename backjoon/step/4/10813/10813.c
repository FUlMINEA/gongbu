#include <stdio.h>
int	baguni(int N, int M)
{
	int	arr[N];
	int	cnt = -1;

	while (++cnt < N)
		arr[cnt] = cnt + 1;

	int	i, j, cg;
	cnt = -1;
	while (++cnt < M)
	{
		scanf("%d %d", &i, &j);
		cg = arr[i - 1];
		arr[i - 1] = arr[j - 1];
		arr[j - 1] = cg;
	}

	cnt = -1;
	while (++cnt < N)
		printf("%d ", arr[cnt]);
	return 0;
}

int	main(void)
{
	int	N, M;
	scanf("%d %d", &N, &M);

	baguni(N, M);
}
