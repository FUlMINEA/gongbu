#include <stdio.h>
int	baguni(int N, int M);

int	main(void)
{
	int	N, M;
	scanf("%d %d", &N, &M);

	baguni(N, M);
}

int	baguni(int N, int M)
{
	int	arr[N];
	int	cnt = -1;
	int	i, j, k;

	while (++cnt < N)
		arr[cnt] = 0;

	cnt = -1;
	while (++cnt < M)
	{
		scanf("%d %d %d", &i, &j, &k);
		while ( i <= j )
		{
			arr[i - 1] = k;
			i++;
		}
	}
	
	cnt = -1;
	while (++cnt < N)
		printf("%d ", arr[cnt]);
	
	return 0;
}

