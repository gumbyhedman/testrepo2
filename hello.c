#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
    char buf[8];
    if (argc > 1) {
        // BUG here: can overrun
        strcpy(buf, argv[1]);
    } else {
        buf[0] = '\0';
    }

    printf("Hello %s\n", buf);

    return EXIT_SUCCESS;
}
