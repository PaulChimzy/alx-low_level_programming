#include<stdio.h>
#include<conio.h>
/**
 * main - finds the size of various data types
 * Return: 0 if everything works fine
 */
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    printf("Size of a char: %zu byte(s)\n", sizeof(charType));
    printf("Size of an int: %zu byte(s)\n", sizeof(intType));
    printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
    printf("Size of a float: %zu byte\n", sizeof(floatType));
    
    return 0;
}
