#include <stdio.h>

int     main(void)
{
        int     N;
        int     cnt = -1;
        int     i = 0;
        int     result[10];

        while (++cnt < 10)
        {
                int     cnt2 = -1;
                int     check = 0;

                scanf("%d", &N);
                N %= 42;

                while(++cnt2 < i)
                {
                        if ( result[cnt2] != N )
                                check = 1;
                }
                if (i == 0)
                {
                        result[0] = N;
                        i++;
                }
                if (check == 1)
                {
                        result[i] = N;
                        i++;
                }
        }
        printf("%d", i);
        return 0;
}
