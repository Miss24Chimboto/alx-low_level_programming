#include"main.h"
/**
 * string_toupper - changing lowercase to uppercase
 * @str: pointer
 *
 * Return: Char
 */
char *string_toupper(char *str)
{
char *ch = str;
int i = 0;

while (ch[i] != '\0')
{
if (ch[i] >= 'a' && ch[i] <= 'z')
{
ch[i] = ch[i] - 32;
}
i++;
}
return (ch);
}
