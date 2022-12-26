#include <stdio.h>
void main()
{
    int n, c[10], d[10], m, k = 0;
    printf("enter the no. of element of set A \n");
    scanf("%d", &n);
    int a[n];
    printf("insert the element in set A \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter the no. of element of set B \n");
    scanf("%d", &m);
    int b[m];
    printf("insert the element in set B\n");
    for (int j = 0; j < m; j++)
    {
        scanf("%d", &b[j]);
    }

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
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
    }
