#include <unistd.h>

/**
 * _strncat - writes the character c to stdout
 * @dest: The character to print
 * @src: pointer to the source
 * @n: the number of bytes to concatenate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
char *_strncat(char *dest, char *src, int n);
