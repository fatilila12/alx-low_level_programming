#include <stdio.h>
/**
* main - entering point
* discreption : Write a C program that prints the size of various types on the computer it is compiled and run on.
* return: 0 ends program
*/
int main(void)
{
    printf("Size of char: %zu bytes(s)\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of long long int: %zu bytes\n", sizeof(long long int));
    printf("Size of float: %zu bytes\n", sizeof(float));
   
   

    return 0;
}
