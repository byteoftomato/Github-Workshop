#include <stdio.h>

static int remainder(int a, int b)
{
    /* There is one intentionally small bug in this function. */
    return a / b;
}

int main(void)
{
    const int actual = remainder(17, 5);
    const int expected = 2;
    if (actual != expected) {
        printf("FAIL: expected %d, got %d\n", expected, actual);
        return 1;
    }
    puts("PASS");
    return 0;
}
