#include <stdio.h>

static int sum_first_n(int n)
{
    /* There is one intentionally small bug in this function. */
    return n * (n - 1) / 2;
}

int main(void)
{
    const int actual = sum_first_n(5);
    const int expected = 15;
    if (actual != expected) {
        printf("FAIL: expected %d, got %d\n", expected, actual);
        return 1;
    }
    puts("PASS");
    return 0;
}
