#include <stdio.h>

static int is_even(int n)
{
    /* There is one intentionally small bug in this function. */
    return n % 2 != 0;
}

int main(void)
{
    const int actual = is_even(8);
    const int expected = 1;
    if (actual != expected) {
        printf("FAIL: expected %d, got %d\n", expected, actual);
        return 1;
    }
    puts("PASS");
    return 0;
}
