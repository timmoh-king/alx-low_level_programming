#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: memory area
 * @b: character value
 * @n: integer value
 *
 * Return:  pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
#include "main.h"
#include <stdio.h>

/**
 *  * simple_print_buffer - prints buffer in hexa
 *   * @buffer: the address of memory to print
 *    * @size: the size of the memory to print
 *     *
 *      * Return: Nothing.
 *       */
void simple_print_buffer(char *buffer, unsigned int size)
{
	        unsigned int i;

		        i = 0;
			        while (i < size)
					        {
							                if (i % 10)
										                {
													                        printf(" ");
																                }
									                if (!(i % 10) && i)
												                {
															                        printf("\n");
																		                }
											                printf("0x%02x", buffer[i]);
													                i++;
															        }
				        printf("\n");
}

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    char buffer[98] = {0x00};

	        simple_print_buffer(buffer, 98);
		    _memset(buffer, 0x01, 95);
		        printf("-------------------------------------------------\n");
			    simple_print_buffer(buffer, 98);    
			        return (0);
}
