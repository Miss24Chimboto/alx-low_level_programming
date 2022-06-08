#include "main.h"
/**
 * Returns 1 if c is a letter, lowercase or uppercase
 *
 * Description: function that prints the alphabet 
 *
 * Return: 0
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
