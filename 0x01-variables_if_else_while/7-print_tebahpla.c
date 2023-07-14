#include <stdio.h>

/*main*/int main(void)
{
    putchar('z');
    
    if ('z' > 'a') {
        main();
    }

    putchar('\n');

    return (0);
}

