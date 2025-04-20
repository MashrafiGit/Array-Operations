#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int inx, val;
    scanf("%d %d", &inx, &val);

    for (int i = n; i >= inx + 1; i--)
    {
        a[i] = a[i - 1];
    }

    a[inx] = val;

    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}