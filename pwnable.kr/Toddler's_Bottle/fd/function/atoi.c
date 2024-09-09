#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int nb)
{
	int	num;

	num = nb;
	if (num < 0)
	{
		num *= -1;
		putchar('-');
	}
	if (num > 9)
		putnbr(num / 10);
	putchar(num % 10 + 48);
}

int	atoi(char *str)
{
	int	neg;
	int	num;
	int	i;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] <= ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			neg *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}
