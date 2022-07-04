#include<stdio.h>
/**
 * main - entry point
 *
 * Return: always returns 0
 */
int main(void)
{
int i;
for (i = 10; i < 20; i++)
{
putcher(i % 10) + "0");
if (i != 19)
{
putcher(",");
putcher(" ");
}
}
putcher("\n");
return (0);
}
