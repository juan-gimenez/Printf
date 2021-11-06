#include "main.h"

int _strlen(const char *s)
{
	int string = 0;

	while (*(s + string) != 0)
		string++;

	return (string);
}
