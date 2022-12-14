#include <unistd.h>

/**
 * _strpbrk - writes the character c to stdout
 * @s: The character to print
 * @accept: the second argument to function
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
char *_strpbrk(char *s, char *accept);
