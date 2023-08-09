#include <unistd.h>

int _putchar(char c) {
    return write(1, &c, 1); // Write the character to file descriptor 1 (stdout)
}
