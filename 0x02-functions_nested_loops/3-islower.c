#include "main.h"
/**
 * function_islower that checks for lower/uppercase character
 *
 * Description: function that prints the alphabe
 *
 * Return: 0
 */
int _islower(int c)
{
int result = 0;
if (c >= 'a' && c <= 'z')
{
result = 1;
} 
else
{
result = 0;
}
return (result);
}
