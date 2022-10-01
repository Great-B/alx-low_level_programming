#include <unistd.h>

/**
 * _memcpy - writes the character c to stdout
 * @dest: The character to print
 * @src: the pointer to the source
 * @n: the number of bytes to copy to memory
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
char *_memcpy(char *dest, char *src, unsigned int n);
