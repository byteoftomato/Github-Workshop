#include <stdio.h>

static int triangle_perimeter(int a, int b, int c)
{
    /* There is one intentionally small bug in this function. */
    return a + b + c;
}

int main(void)
{
    const int actual = triangle_perimeter(3, 4, 5);
    const int expected = 12;
    if (actual != expected)
    {
        printf("FAIL: expected %d, got %d\n", expected, actual);
        return 1;
    }
    puts("PASS");
    return 0;
}
