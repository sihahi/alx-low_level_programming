#include <unistd.h>

/**
 * _putchar - writes the character C to stdout
 * 0c : the character yo print
 *
 * Return : on success 1.
 * on error, -1 is returned, and error is set appropriately.
 */
int -putchar(char c)
{
	return (write(1, &c, 1));
}
