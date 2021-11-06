#include <unistd.h>
/**
 * print_char - prints a char
 *Return: 0
 *@c: char input
 */
void print_char(char c)
{
	write(1, c, 1);
}
