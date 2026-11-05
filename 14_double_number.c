#include <stdio.h>

static int double_number(int n)
{
    /* There is one intentionally small bug in this function. */
    return n * 2;
}

int main(void)
{
    const int actual = double_number(7);
    const int expected = 14;
    if (actual != expected)
    {
        printf("FAIL: expected %d, got %d\n", expected, actual);
        return 1;
    }
    puts("PASS");
    return 0;
}
