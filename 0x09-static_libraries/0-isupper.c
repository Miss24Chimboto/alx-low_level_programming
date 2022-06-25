#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * @c: is the character to check
 * Description: function for printing uppercase characters
 *
 * Return: 1 if c is uppercase, 0 if not
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
