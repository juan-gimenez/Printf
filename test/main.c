#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    void *addr;
    int c = 43;

    addr = (void *)0x7ffe637541f0;

    _printf("Character:[%c]\n", 'd');
    printf("Character:[%c]\n", ' ');
    _printf("String:[%s]\n", "902342");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    _printf("Percent:[%%]\n");
    printf("Percent:[%%]\n");
    _printf("%d", c);
    return (0);
}
