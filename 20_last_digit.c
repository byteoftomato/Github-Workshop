#include <stdio.h>

static int last_digit(int n)
{
    /* There is one intentionally small bug in this function. */
    return n / 10;
}

int main(void)
{
    const int actual = last_digit(123);
    const int expected = 3;
    if (actual != expected) {
        printf("FAIL: expected %d, got %d\n", expected, actual);
        return 1;
    }
    puts("PASS");
    return 0;
}
