#include <stdio.h>
/**
* main - Prints the alphabet in lowercase.
* Return: 0(if all goes well)
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
