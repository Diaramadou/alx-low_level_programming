#include <stdio.h>


/**
 * main - Printf the size of various types on
 * the computer it is compiled and run on.
 *Return: Always 0.
*/

int main(void)

{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
       printf("Size of an int: %zu byte(s)", sizeof(int));
       printf("Size of a long int: %zu byte(s)", sizeof(long int));
       printf("Size of a long long int: %zu byte(s)", sizeof(long long));
       printf("Size of a float: %zu byte(s)", sizeof(float));
}
