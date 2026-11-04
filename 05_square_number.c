#include <stdio.h>

static int square_number(int n)
{
    /* There is one intentionally small bug in this function. */
    return n + n;
}

int main(void)
{
    const int actual = square_number(5);
    const int expected = 25;
    if (actual != expected) {
        printf("FAIL: expected %d, got %d\n", expected, actual);
        return 1;
    }
    puts("PASS");
    return 0;
}
