#include <stdio.h>
int main()
{
    int n, c = 0;
    scanf("%d", &n);
    while (n--)
    {
        int d, value[1000];
        scanf("%d", &d);

        for (int i = 0; i < d; ++i)
        {
            scanf("%d", &value[i]);
        }

        printf("Denominations: ");
        for (int i = 0; i < d; ++i)
        {
            printf("%d ", value[i]);
        }
        printf("\n");

        for (int i = 0; i < d; ++i)
        {
            if (2 * value[i] <= value[i + 1])
                c = 1;
            else
            {
                c = 0;

                break;
            }
        }

        if (c == 1)
        {
            printf("Good coin denominations!\n\n");
        }
        else
        {
            printf("Bad coin denominations!\n\n");
        }
    }
    return 0;
}