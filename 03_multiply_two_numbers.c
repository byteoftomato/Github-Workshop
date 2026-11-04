#include <stdio.h>

static int multiply_two_numbers(int a, int b)
{
    /* There is one intentionally small bug in this function. */
    return a + b;
}

int main(void)
{
    const int actual = multiply_two_numbers(6, 3);
    const int expected = 18;
    if (actual != expected) {
        printf("FAIL: expected %d, got %d\n", expected, actual);
        return 1;
    }
    puts("PASS");
    return 0;
}
