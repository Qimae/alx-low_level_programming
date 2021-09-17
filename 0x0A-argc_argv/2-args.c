#include "main.h"
#include <stdio.h>
/**main - prints program name followed by new line.
 *
 * @i: argc value
 * @argv: array of pointer to argument strings.
 * @argc: value count
 * return: always 0
 **/
int main (int argc, char *argv[])
{
        int i;
        
        for(i = 0; i < argc; i++)
        {
                printf("%s\n", argv[i]);
        }
        return (0);
}
