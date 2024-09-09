#include <unistd.h>
#include <stdio.h>

void	putchar(char *ch)
{
	write(1, &ch, 1);
}

char	gets(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0' || s[i] != '\n')
	{
		putchar(s[i]);
		i++;
	}
	return 0;
}

int	main(void)
{
	char	bof[10];

	gets(bof);
	printf("%s\n", *bof);
}
