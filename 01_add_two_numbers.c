#include <stdio.h>

static int add_two_numbers(int a, int b)
{
    /* There is one intentionally small bug in this function. */
    return a - b;
}

int main(void)
{
    const int actual = add_two_numbers(7, 5);
    const int expected = 12;
    if (actual != expected) {
        printf("FAIL: expected %d, got %d\n", expected, actual);
        return 1;
    }
    puts("PASS");
    return 0;
}
