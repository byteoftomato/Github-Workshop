#include <stdio.h>

static int seconds_to_minutes(int seconds)
{
    /* There is one intentionally small bug in this function. */
    return seconds % 60;
}

int main(void)
{
    const int actual = seconds_to_minutes(180);
    const int expected = 3;
    if (actual != expected) {
        printf("FAIL: expected %d, got %d\n", expected, actual);
        return 1;
    }
    puts("PASS");
    return 0;
}
