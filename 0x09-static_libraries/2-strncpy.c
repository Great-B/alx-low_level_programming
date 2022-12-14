#include <unistd.h>

/**
 * _strncpy - writes the character c to stdout
 * @dest: The character to print
 * @src: pointer to the src
 * @n: the number of bytes to copy
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
char *_strncpy(char *dest, char *src, int n);
