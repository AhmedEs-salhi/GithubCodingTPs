#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    int bytes = write(STDIN_FILENO);
    return 0;
}