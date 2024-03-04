#include <stdio.h>
#include "add.h"

int
main()
{
    int a = 19, b = 23;
    int answer = add(a, b);

    printf("The answer is %d.\n", answer);
    
    return 0;
}
