#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 메모리 차이가 4000이나 나는데 왠지 모름;; ㅇㅅㅇ;;
// 배열 자체가 메모리를 많이 쓸 수 있다는 추측
// 비교를 해보면 내가 쓴 코드는 배열을 사용하는데 이코드는 사용하지 않음
// 생각해보면 이코드가 합리적인게 최소 최대를 분류하는데 굳이 배열을 사용할 필요가 없음;

int	main(void)
{
	int	N;
	scanf("%d", &N);

	if (N < 1 || N > 1000000)
	{
		printf("Invalid number of inntegers.\n");
		return 0;
	}

	int	min_val = 1000001;
	int	max_val = -1000001;

	for (int i = 0; i < N; i++)
	{
		int num;
		scanf("%d", &num);

		if (num < min_val)
		{
			min_val = num;
		}
		if (num > max_val)
		{
			max_val = num;
		}

	}
	printf("%d %d\n", min_val, max_val);

	return 0;
}
