#include <stdio.h>

int main(void)
{
	/*
	printf("\nCONVERSION\n");
	printf("i - interge 1);
	printf("d - decimal/double?: %d\n", 10);
	printf("u - unsigned decimal/double?: %u\n", -10);
	printf("c - character: %c\n", 'a');
	printf("s - string: %s\n", "hello world");
	printf("o - octal: %o\n", 10);
	printf("x - hexadecimal: %x\n", 10);
	printf("X - HEXADECIMAl: %X\n", 10);
	int *ptr = NULL;
	int a = 5;
	ptr = &a;
	printf("p - address kept at pointer: %p\n", &a);
	printf("p - address kept at pointer: %p\n", ptr);

	printf("\nPRECISION\n");
	char str[] = "Hello world";
	printf("Full string: %s\n", str);
	printf("s - .3s: %.3s\n", str);

	printf("\nMinimum number of character: WIDTH\n");
	printf("%9d\n", 123);
	printf("%-9d\n", 123); //left justify
	printf("%4d%5d\n", 123, 456);
	printf(" .3s: %.3s\n", str);
	printf("8.3s: %8.3s\n", str);
	printf("-8.3s: %-8.3s\n", str);


	printf("\nFLAG 0 just numeric data\n");
	printf("%0d\n", 123);
	printf("%06d\n", 123);
	printf("%.6d\n", 123);
	printf("%6d\n", 123);

	printf("\n-08.3s: %-8.3s\n", str);

	printf("\n%5d\n", 4); // --- on affiche 4 espaces puis 4
	printf("%*d\n", 5, 4); 
	printf("%0*d\n", 5, 4); // --- on affiche 4 zero '0' puis 5
	printf("%.*d\n", 5, 4);

	printf("\n%010.*d\n", 3, 4);
	printf("%-10.*d\n", 5, 4);
	printf("%.5d\n", 4); 

	printf("\n%-.*d\n", 2, 123);
	printf("%.*d\n", 9, 123);
	printf("%.*d\n", 9, 123);

	printf("\n%0*x\n", 9, 123);
	printf("%0*X\n", 9, 123);
	printf("%-0*d\n", 9, 123);

	printf("\n%-*s\n", 9, "Hello");
	printf("%*s\n", 9, "Hello");

	printf("\n%\n");

	printf("%-010w\n");
	printf("%-----c\n", '!');
	*/

	//Try hex number
	int n = 4;
	int *p1 = &n;
	/*
	printf("print unsigned int hex: |%x|\n", -123, -123);
	printf("print unsigned int hex: |%x|\n", 123, 123);
	printf("print unsigned int hex: |%-010x|\n", 123, 123);
	printf("print unsigned int hex: |%010x|\n", -123, -123);
	*/
	//Try p
	/*
	printf("Try type p: |%p|\n", p1);
	printf("Try type p: |%p|\n", &n);
	printf("Try type p: |%p|\n", &p1);
	printf("Try type p: |%p|\n", 4);
	*/
	// Try u
	printf("print unsigned int u: |%u|\n", 123456);
	printf("print unsigned int u: |%u|\n", -123456);
	printf("print unsigned int u: |%-010u|\n", -123456);
	printf("print unsigned int u: |%010u|\n", -123456);

	return (0);
}

