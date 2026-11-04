#include <stdio.h>

static int next_number(int n)
{
    /* There is one intentionally small bug in this function. */
    return n - 1;
}

int main(void)
{
    const int actual = next_number(41);
    const int expected = 42;
    if (actual != expected) {
        printf("FAIL: expected %d, got %d\n", expected, actual);
        return 1;
    }
    puts("PASS");
    return 0;
}
