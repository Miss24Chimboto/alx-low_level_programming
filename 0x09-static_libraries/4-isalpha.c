#include "main.h"
/**
 * _isalpha - checks for lower/uppercase character
 * @c: the character to check
 * Description: function that prints the alphabet
 * Return: 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
int result = 0;
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
result = 1;
}
else
{
result = 0;
}
return (result);
}
