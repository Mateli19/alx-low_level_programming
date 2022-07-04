#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always return 0
 */
int main(void);
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
int ch;
for (ch = 65; ch <= 90; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
