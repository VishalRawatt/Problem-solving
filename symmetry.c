#include <stdio.h>
int main()
{
    int m, n, i, j, k = 0, l = 0;
    printf("enter the size of set  A \n");
    scanf("%d", &m);
    printf("enter the size of set B \n");
    scanf("%d", &n);
    int a[m], b[n], c[10], d[10];
    printf("insert the element in set A 1\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("insert the element in set B\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < m; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            c[k] = a[i];
            k++;
        }

        if (count == 0)
        {
            d[l] = b[i];
            l++;
        }
    }
    printf("the difference A-B is \n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
printf("\n");
    printf("the difference B-A is \n");
    for (int i = 0; i < l; i++)
    {
        printf("%d ", d[i]);
    }
    return 0;
}
