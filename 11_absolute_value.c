#include <stdio.h>

static int absolute_value(int n)
{
    /* There is one intentionally small bug in this function. */
    return n < 0 ? -n : n;
}

int main(void)
{
    const int actual = absolute_value(-6);
    const int expected = 6;
    if (actual != expected) {
        printf("FAIL: expected %d, got %d\n", expected, actual);
        return 1;
    }
    puts("PASS");
    return 0;
}
