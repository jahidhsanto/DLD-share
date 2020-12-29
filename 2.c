#include <stdio.h>

int mod(char n[], long long int a)
{
    int i;
    long long int res = 0, length;

    for (i = 0; n[i] != '\0'; ++i)
        ;

    length = i;
    for (i = 0; i < length; i++)
        res = (res * 10 + (n[i] - '0')) % a;

    return res;
}

int main()
{
    int t;
    scanf("%d", &t);

    int i = 1, j;

    while (t--)
    {
        int r;
        long long int m;
        char s1[1000000], s2[1000000];

        scanf("%s ", s1);
        scanf("%lld", &m);

        if (s1[0] == '-')
        {
            for (int i = 1, j = 0; s1[i] != '\0'; ++i, ++j)
            {
                s2[j] = s1[i];
            }
            r = mod(s2, m);
        }

        r = mod(s1, m);

        if (r == 0)
        {
            printf("Case %d: Yes\n", i);
        }
        else
        {
            printf("Case %d: No\n", i);
        }
        i++;
    }

    return 0;
}