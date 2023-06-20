#include <stdio.h>

/**
 * main - Prints alphabet in lowercase
 * Return : 0(Succes), 1(Faliure)
*/

int main(void){
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet ++)
	{
		putchar(alphabet);

	}
	putchar('\n');
	return (0);
}

