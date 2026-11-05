#include <stdio.h>

static int rectangle_perimeter(int width, int height)
{
    /* There is one intentionally small bug in this function. */
    return 2 * (width + height);
}

int main(void)
{
    const int actual = rectangle_perimeter(4, 6);
    const int expected = 20;
    if (actual != expected) {
        printf("FAIL: expected %d, got %d\n", expected, actual);
        return 1;
    }
    puts("PASS");
    return 0;
}
