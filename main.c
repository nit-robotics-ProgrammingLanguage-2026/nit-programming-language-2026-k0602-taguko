#include <stdio.h>

int main(void)
{
    long n, i, ans = 0;
    scanf("%ld", &n);
    /* TODO */
    if (n < 0) printf("NG");
    else {
        for (i = 1; i <= n; i += 2)
            ans += i;
        printf("%ld", ans);
    }
    return 0;
}
