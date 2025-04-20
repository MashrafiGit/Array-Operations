#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int inx;
    scanf("%d", &inx);

    for (int i = inx; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    n--;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}