#include <stdio.h>

static int maximum(int a, int b)
{
    /* There is one intentionally small bug in this function. */
    return a > b ? a : b;
}

int main(void)
{
    const int actual = maximum(4, 9);
    const int expected = 9;
    if (actual != expected) {
        printf("FAIL: expected %d, got %d\n", expected, actual);
        return 1;
    }
    puts("PASS");
    return 0;
}
