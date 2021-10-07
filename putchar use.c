// C program to demonstrate putchar() method

#include <stdio.h>

int main()
{

	// Get the character to be written
	char ch = 'A';
    // Example for getchar() in C
    printf("%c", getchar());



	// Write the Character to stdout
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	return (0);
}
