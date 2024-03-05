#include <stdio.h>
#include "src/add.h"
#include "src/sub.h"

int
main(void)
{
    int a = 15, b = 4, c = 28, d = 5;
    int x = add(a, b);
    int y = sub(c, d);
    printf("The answer is %d.\n", add(x, y));

    return 0;
}
