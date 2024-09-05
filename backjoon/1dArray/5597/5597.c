#include <stdio.h>
 
int	main(void)
{
	int	arr[30] = {0, };
    	int	cnt = -1;

    	while (++cnt < 28)
    	{
		int	N;
	    	scanf("%d", &N);
	    	arr[N - 1]++;
	}

	cnt = -1;
	while (++cnt < 30)
	{
		if (arr[cnt] == 0)
			printf("%d\n", cnt+1);
	}
	
	return 0;
}
