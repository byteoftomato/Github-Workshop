#include <stdio.h>

static int is_positive(int n)
{
    /* There is one intentionally small bug in this function. */
    return n < 0;
}

int main(void)
{
    const int actual = is_positive(3);
    const int expected = 1;
    if (actual != expected) {
        printf("FAIL: expected %d, got %d\n", expected, actual);
        return 1;
    }
    puts("PASS");
    return 0;
}
