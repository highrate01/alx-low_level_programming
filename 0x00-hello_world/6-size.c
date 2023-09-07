#include <stdio.h>
/**
 * main - This program print size of various types on the computer
 *
 * Return: always 0(success)
 *
 */
int main(void)
{
printf("Size of a char: %lubyte(s)", sizeof(char));
printf("Size of a int: %lubyte(s)", sizeof(int));
printf("Size of a float: %lubyte(s)", sizeof(float));
printf("Size of a long int: %lubyte(s)", sizeof(long int));
printf("Size of a long long int :%lubyte(s)", sizeof(long long int));
return (0);
}
