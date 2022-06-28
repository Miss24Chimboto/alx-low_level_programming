#include <stdio.h>
/**
 * main - Prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("argc = %d\n", argc -1);
return (0);
}
