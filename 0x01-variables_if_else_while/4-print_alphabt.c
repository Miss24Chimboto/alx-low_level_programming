#include <stdio.h>
/**
* main - main - enables program to work
*
* Return: enables it to run successfully
*/
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
putchar(letter);
}
putchar('\n');

return (0);
}
