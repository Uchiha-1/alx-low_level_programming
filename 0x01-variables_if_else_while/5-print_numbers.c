#include <stdio.h>

/*main*/int main(void)
{
    int number;

    for (number = 0; number <= 9; number++)
    {
        putchar('0' + number);
    }

    putchar('\n');

    return (0);
}

