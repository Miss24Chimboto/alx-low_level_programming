#include <stdio.h>
/**
* main - enables program to work
*(Description: This prints the alphabet)?
*/
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
putchar(c);
for (c = 'A'; c <= 'Z'; c++)
putchar(c);
putchar('\n');

return (0);
}
