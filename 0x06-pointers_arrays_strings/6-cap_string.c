#include"main.h"
/**
 * cap_string - Capitalizes string
 * @str: changing this string
 *
 * Return: string
 */
char *cap_string(char *str)
{
char *ch = str;
int x, i = 0;
char sep[13] = {' ', '\t', '\n', ',', ';', '.',
'!', '?', '"', '(', ')', '{', '}'};

while (ch[1] != '\0')
{
for (x = 0; x <= 12; x++)
{
if (ch[i] == sep[x])
{
if (ch[i + 1] >= 97 && ch[i + 1] <= 122)
{
ch[i + 1] -= 32;
}
}
}
i++;
}
return (ch);
}
