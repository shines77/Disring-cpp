
#include <stdio.h>
#include <stdlib.h>

#include "disring/system/console.h"

int main(int argn, char ** argv)
{
    printf("Hello world!\n\n");

    jimi_console_readkeyln(false, true, false);
    return 0;
}
