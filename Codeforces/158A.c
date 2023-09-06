#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int in[n], out = 0, pos = 0, same = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &in[i]);
        if (in[i] > 0)
            pos++;
    }
    for (int i = k; i < n; i++)
        if (in[k - 1] == in[i])
            same++;
    if (pos >= k)
        out = k + same;
    else if (pos < k)
        out = pos;
    printf("%d\n", out);
    return 0;
}