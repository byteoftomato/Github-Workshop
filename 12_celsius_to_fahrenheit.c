#include <stdio.h>

static int celsius_to_fahrenheit(int c)
{
    /* There is one intentionally small bug in this function. */
    return (c * 9 / 5) + 32;
}

int main(void)
{
    const int actual = celsius_to_fahrenheit(20);
    const int expected = 68;
    if (actual != expected) {
        printf("FAIL: expected %d, got %d\n", expected, actual);
        return 1;
    }
    puts("PASS");
    return 0;
}
