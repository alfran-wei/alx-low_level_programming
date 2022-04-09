#include <stdio.h>

/*
 *main - print all combination of 2 digit number
 *but digit number are different
 *and '01' is the same combination of '10'
 *return : Always 0 (Success)
 */

int main (void)
{
int i,n;
i='0';
n='1';
while ( i < '9' )
{
while ( ( n > i ) && ( n <= '9' ) )
{
putchar(i);
putchar(n);
if (i < '8')
{
putchar(',');
putchar(' ');
}
n++;
}
i++;
n=i+1;
}
putchar('\n');
return (0);
}
