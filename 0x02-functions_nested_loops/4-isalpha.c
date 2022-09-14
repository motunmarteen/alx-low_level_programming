#include "main.h"

/**
 * isalpha -> checks fr alphabetical letters
 *
 * @c: a character to be checkes on
 *
 * Return: returns 0 or 1 depending on the condition
 */
int isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
