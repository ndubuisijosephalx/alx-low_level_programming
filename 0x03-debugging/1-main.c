#include <stdio.h>

/**
 * main - causes an infinite loop
 *
 * Return: 0
 */

/*main function*/
int main(void)
{
int i;
printf("Infinite loop incoming :(\n");
i = 10;
/**
 * line 18 will cause an infinite loop
while (i < 10)
*/
{
putchar(i);
}
printf("Infinite loop avoided! \\o/ln");
return (0);
}
