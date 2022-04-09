#include <stdio.h>

/**
 *main - print all combinations of three different digits
 *Return: Always 0 (Success)
 */

int main(void)
{
int first;
int second;
int third;

for (third = '0'; third <= '9'; third++)
{
for (second = (third + 1); second <= '9'; second++)
{
for (first = (second + 1); first <= '9'; first++)
{
putchar(third);
putchar(second);
putchar(first);
if (third != '7' || second != '8' || first != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
