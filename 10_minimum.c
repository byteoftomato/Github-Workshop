#include <stdio.h>

static int minimum(int a, int b)
{
    /* There is one intentionally small bug in this function. */
    return a > b ? a : b;
}

int main(void)
{
    const int actual = minimum(4, 9);
    const int expected = 4;
    if (actual != expected) {
        printf("FAIL: expected %d, got %d\n", expected, actual);
        return 1;
    }
    puts("PASS");
    return 0;
}
