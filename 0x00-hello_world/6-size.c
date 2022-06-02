#include<stdio.h>
/**
 * main - void enables the code to run successfully
 *
(*
 *Description: prints the sizes of various types)?
 *Return: 0
 */
int main (void)
{
 char sizechar;
 int  sizeint;
 long sizelong;
 long long sizelonglong;
 float sizefloat;

printf("Size of char:%lu\n", sizeof(sizechar));
printf("Size of int:%lu\n", sizeof(sizeint));
printf("Size of long:%lu\n", sizeof(sizelong));
printf("Size of longlong:%lu\n", sizeof(sizelonglong));
printf("Size of float:%lu\n", sizeof(sizefloat));

return (0);
}
