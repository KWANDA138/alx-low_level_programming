#include "main.h"
#include <unistd.h>
/**
 * _putchar-writesthe character c to stdout
 * @c: Thecharacter to print
 *
 * Return: on success 1
 * On error, -1 is returne, and error is set appropriately
 */
int_putchar(char c)
{
	return(write(1, &c, 1));
}
