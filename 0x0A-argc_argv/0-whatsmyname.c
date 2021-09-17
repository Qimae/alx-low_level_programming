#include "main.h"
#include <stdio.h>
/**main - prints program name followed by new line.
 *
 * @i: argc value
 * return: always 0
 */
int main (int argc, char *argv[])
{
	int i;
	
	for(i = 0; i < argc; i++)
	{
		printf("%d%s\n", i, argv[i]);
	}
	return (0);
}
