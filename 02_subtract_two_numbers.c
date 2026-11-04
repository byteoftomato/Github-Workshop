#include <stdio.h>

static int subtract_two_numbers(int a, int b)
{
    /* There is one intentionally small bug in this function. */
    return a + b;
}

int main(void)
{
    const int actual = subtract_two_numbers(9, 4);
    const int expected = 5;
    if (actual != expected) {
        printf("FAIL: expected %d, got %d\n", expected, actual);
        return 1;
    }
    puts("PASS");
    return 0;
}
