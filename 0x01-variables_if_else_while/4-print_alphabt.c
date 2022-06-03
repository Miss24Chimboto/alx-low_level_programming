#include <stdio.h>
/**
* main - main - enables it to run successfully
* Description: This prints the alphabet minus q and e
* Return: 0
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
