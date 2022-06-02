#include <stdio.h>

int main()
{
    int t = 1, n, temp = 0;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        if (n == 1)
        {
            if (a[0] == 1)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (a[j] < a[k])
                    {
                        temp = a[j];
                        a[j] = a[k];
                        a[k] = temp;
                    }
                }
            }

            if (a[0] - a[1] > 1)
            {
                printf("N0\n");
            }
            else
            {
                printf("YES\n");
            }
        }
    }

    return 0;
}