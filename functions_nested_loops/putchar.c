#include "main.h"

/**
* main - prints "_putchar" and that's it. but there's a catch
* Return: always 0
*/

int main(void)
{
	int i = 0;
	char str[] = "_putchar";

	for (i = 0; i != "/0"; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
