#include "ft_printf.h"
void c(void)
{
	
	printf("--------------------%%c--------------------\n");		//Perfect
	printf("01) Vrai PRINTF : |%c|\n", 'a');
	ft_printf("01) Mon PRINTF  : |%c|\n", 'a');
	printf("02) Vrai PRINTF : |%-c|\n", 'z');
	ft_printf("02) Mon PRINTF  : |%-c|\n", 'z');
	printf("03) Vrai PRINTF : |%-----c|\n", '!');
	ft_printf("03) Mon PRINTF  : |%-----c|\n", '!');
	printf("04) Vrai PRINTF : |%5c|\n", 'R');
	ft_printf("04) Mon PRINTF  : |%5c|\n", 'R');
	printf("05) Vrai PRINTF : |%-5c|\n", 'R');
	ft_printf("05) Mon PRINTF  : |%-5c|\n", 'R');
	printf("06) Vrai PRINTF : |%1c|\n", '3');
	ft_printf("06) Mon PRINTF  : |%1c|\n", '3');
	printf("07) Vrai PRINTF : |%c|\n", '\0');
	ft_printf("07) Mon PRINTF  : |%c|\n", '\0');
	printf("08) Vrai PRINTF : |%5c|\n", '\0');
	ft_printf("08) Mon PRINTF  : |%5c|\n", '\0');
	printf("09) Vrai PRINTF : |%-5c|\n", '\0');
	ft_printf("09) Mon PRINTF  : |%-5c|\n", '\0');
	printf("10) Vrai PRINTF : |%1c|\n", '\0');
	ft_printf("10} Mon PRINTF  : |%1c|\n", '\0');
	printf("11) Vrai PRINTF : |%10cw|\n", 'a');
	ft_printf("11} Mon PRINTF  : |%10cw|\n", 'a');
}
void s(void)
{
	ft_printf("--------------------%%s--------------------\n");	//Perfect
	printf("01) Vrai PRINTF : |%.2s|\n", "salut");
	ft_printf("01) Mon PRINTF  : |%.2s|\n", "salut");
	printf("02) Vrai PRINTF : |%-s|\n", "test");
	ft_printf("02) Mon PRINTF  : |%-s|\n", "test");
	printf("03) Vrai PRINTF : |%---------s|\n", "test2");
	ft_printf("03) Mon PRINTF  : |%----------s|\n", "test2");
	printf("04) Vrai PRINTF : |%10s|\n", "42");
	ft_printf("04) Mon PRINTF  : |%10s|\n", "42");
	printf("05) Vrai PRINTF : |%-10s|\n", "42");
	ft_printf("05) Mon PRINTF  : |%-10s|\n", "42");
	printf("06) Vrai PRINTF : |%2s|\n", "string");
	ft_printf("06) Mon PRINTF  : |%2s|\n", "string");
	printf("07) Vrai PRINTF : |%-2s|\n", "string");
	ft_printf("07) Mon PRINTF  : |%-2s|\n", "string");
	printf("08) Vrai PRINTF : |%.15s|\n", "precision");
	ft_printf("08) Mon PRINTF  : |%.15s|\n", "precision");
	printf("09) Vrai PRINTF : |%.4s|\n", "precision");
	ft_printf("09) Mon PRINTF  : |%.4s|\n", "precision");
	printf("10) Vrai PRINTF : |%.0s|\n", "precision");
	ft_printf("10) Mon PRINTF  : |%.0s|\n", "precision");
	printf("11) Vrai PRINTF : |%s|\n", "\0\0\0\0\0");
	ft_printf("11) Mon PRINTF  : |%s|\n", "\0\0\0\0\0");
	printf("12) Vrai PRINTF : |%10s|\n", "\0\0\0\0\0");
	ft_printf("12) Mon PRINTF  : |%10s|\n", "\0\0\0\0\0");
	printf("13) Vrai PRINTF : |%s|\n", "");
	ft_printf("13) Mon PRINTF  : |%s|\n", "");
	printf("14) Vrai PRINTF : |%-.2s|\n", "boom");
	ft_printf("14) Mon PRINTF  : |%-.2s|\n", "boom");
	printf("15) Vrai PRINTF : |%10.8s|\n", "google");
	ft_printf("15) Mon PRINTF  : |%10.8s|\n", "google");
	printf("16) Vrai PRINTF : |%10.2s|\n", "twitter");
	ft_printf("16) Mon PRINTF  : |%10.2s|\n", "twitter");
	printf("17) Vrai PRINTF : |%2.10s|\n", "samsung");
	ft_printf("17) Mon PRINTF  : |%2.10s|\n", "samsung");
	printf("18) Vrai PRINTF : |%2.5s|\n", "printf");
	ft_printf("18) Mon PRINTF  : |%2.5s|\n", "printf");
	printf("19) Vrai PRINTF : |%-10.2s|\n", "424242424242");
	ft_printf("19) Mon PRINTF  : |%-10.2s|\n", "424242424242");
	printf("20) Vrai PRINTF : |%1.0s|\n", "123456789");
	ft_printf("20) Mon PRINTF  : |%1.0s|\n", "123456789");
	printf("20) Vrai PRINTF : |%-1.0s|\n", "123456789");
	ft_printf("20) Mon PRINTF  : |%-1.0s|\n", "123456789");
	
	printf("21) Vrai PRINTF : |%s|\n", NULL);
	ft_printf("21) Mon PRINTF  : |%s|\n", NULL);
	printf("22) Vrai PRINTF : |%10s|\n", NULL);
	ft_printf("22) Mon PRINTF  : |%10s|\n", NULL);
	printf("23) Vrai PRINTF : |%-10s|\n", NULL);
	ft_printf("23) Mon PRINTF  : |%-10s|\n", NULL);
	printf("24) Vrai PRINTF : |%.2s|\n", NULL);
	ft_printf("24) Mon PRINTF  : |%.2s|\n", NULL);
	printf("25) Vrai PRINTF : |%10.8s|\n", NULL);
	ft_printf("25) Mon PRINTF  : |%10.8s|\n", NULL);
	printf("26) Vrai PRINTF : |%10.2s|\n", NULL);
	ft_printf("26) Mon PRINTF  : |%10.2s|\n", NULL);
	printf("27) Vrai PRINTF : |%2.10s|\n", NULL);
	ft_printf("27) Mon PRINTF  : |%2.10s|\n", NULL);
	printf("28) Vrai PRINTF : |%2.5s|\n", NULL);
	ft_printf("28) Mon PRINTF  : |%2.5s|\n", NULL);
	printf("29) Vrai PRINTF : |%-10.2s|\n", NULL);
	ft_printf("29) Mon PRINTF  : |%-10.2s|\n", NULL);
	printf("30) Vrai PRINTF : |%1.0s|\n", NULL);
	ft_printf("30) Mon PRINTF  : |%1.0s|\n", NULL);
	printf("31) Vrai PRINTF : |%-1.s|\n", NULL);
	ft_printf("31) Mon PRINTF  : |%-1.s|\n", NULL);	
	printf("\n32) Vrai PRINTF : |%.*s|\n", 3, "Hello");
	ft_printf("32) Mon PRINTF  : |%.*s|\n", 3, "Hello");	
	printf("\n33) Vrai PRINTF : |%.*10s|\n", 3, "Hello");
	ft_printf("33) Mon PRINTF  : |%.*10s|\n", 3, "Hello");
	printf("\n34) Vrai PRINTF : |%*10s|\n", 3, "Hello");
	ft_printf("34) Mon PRINTF  : |%*10s|\n", 3, "Hello");
	
	//Test case of 42printfLover
	char *s = "abc";
	char *t = NULL;
	char *u = "";
	printf("35) Vrai PRINTF : |%-16.s|\n", NULL);
	ft_printf("35) Mon PRINTF  : |%-16.s|\n", NULL);
	printf("-->|%-16.s|<--\n", s);
	ft_printf("-->|%-16.s|<--\n", s);
	printf("-->|%*.*s|<--\n", -1, 0, s);
	ft_printf("-->|%*.*s|<--\n", -1, 0, s);
	printf("-->|%--9.s|<--\n", s);
	ft_printf("-->|%--9.s|<--\n", s);
	printf("-->|%-3.0s|<--\n", s);
	ft_printf("-->|%-3.0s|<--\n", s);
	printf("-->|%-3.0s|<--\n", t);
	ft_printf("-->|%-3.0s|<--\n", t);

	printf("36) Vrai PRINTF : |%-16.s|\n", u);
	ft_printf("36) Mon PRINTF  : |%-16.s|\n", u);
}

void i(void)
{
	
	ft_printf("--------------------%%i--------------------\n");
	printf("01) Vrai PRINTF: |%i|\n", 42);
	ft_printf("01) Mon PRINTF : |%i|\n", 42);
	printf("02) Vrai PRINTF: |%i|\n", -42);
	ft_printf("02) Mon PRINTF : |%i|\n", -42);
	printf("03) Vrai PRINTF: |%-i|\n", -42);
	ft_printf("03) Mon PRINTF : |%-i|\n", -42);
	printf("04) Vrai PRINTF : |%-10i|\n", -42);
	ft_printf("04) Mon PRINTF :  |%-10i|\n", -42);
	printf("05) Vrai PRINTF : |%10i|\n", -42);
	ft_printf("05) Mon PRINTF :  |%10i|\n", -42);
	printf("06) Vrai PRINTF : |%010i|\n", -42);
	printf("06) Mon PRINTF  : |%010i|\n", -42);
	//neu co precision thi se in number va so 0 cho du precision, 
 	//neu co them width thi se ko in gi cho du width
	
	printf("10) Vrai PRINTF : |%010.3i|\n", 42);
	ft_printf("10) Mon PRINTF:   |%010.3i|\n", 42);
	printf("10a) Vrai PRINTF:|%10.3i|\n", 42);
	ft_printf("10a) Mon PRINTF: |%10.3i|\n", 42);
	printf("10b) Vrai PRINTF:|%10.3i|\n", -42);
	ft_printf("10b) Mon PRINTF: |%10.3i|\n", -42);
	printf("10c) Vrai PRINTF:|%-10.3i|\n", -42);
	ft_printf("10c) Mon PRINTF: |%-10.3i|\n", -42);
	printf("11) Vrai PRINTF : |%.10i|\n", -42);
	ft_printf("11) Mon PRINTF :  |%.10i|\n", -42);
	printf("12) Vrai PRINTF : |%-10i|\n", 42); // 0 is ignored when - exists
	ft_printf("12) Mon PRINTF :  |%-10i|\n", 42); // 0 is ignored when - exists
	printf("12a) Vrai PRINTF : |%-10i|\n", -42);
	ft_printf("12a) Mon PRINTF :  |%-10i|\n", -42); // 0 is ignored when - exists
	printf("13) Vrai PRINTF : |%.10i|\n", -42);
	ft_printf("13) Mon PRINTF :  |%.10i|\n", -42);
	printf("\n14) Vrai PRINTF : |%010i|\n", -42);
	ft_printf("14) Mon PRINTF :  |%010i|\n", -42);
	printf("14a) Vrai PRINTF : |%-010i|\n", -42);
	ft_printf("14a) Mon PRINTF :  |%-010i|\n", -42);
	printf("15) Vrai PRINTF : |%10i|\n", -42); 
	ft_printf("15) Mon PRINTF :  |%10i|\n", -42);
	printf("16) Vrai PRINTF : |%-10i|\n", -42); 
	ft_printf("16) Mon PRINTF :  |%-10i|\n", -42); 
	printf("17) Vrai PRINTF : |%-*.1i|\n", 10, -42);
	ft_printf("17) Mon PRINTF :  |%-*.1i|\n", 10, -42);
	printf("18) Vrai PRINTF : |%-015.*i|\n", 10, -123);
	ft_printf("18) Mon PRINTF :  |%-015.*i|\n", 10, -123);
	
	// thu truong hop precision nho hon do dai cua so
	printf("19) Vrai PRINTF : |%015.*i|\n", 3, 1234567);
	ft_printf("19) Mon PRINTF :  |%015.*i|\n", 3, 1234567);
	printf("20) Vrai PRINTF : |%0*i|\n", 15, -1234567);
	ft_printf("20) Mon PRINTF :  |%0*i|\n", 15, -1234567);
	printf("21) Vrai PRINTF : |%-0*i|\n", 15, -1234567);
	ft_printf("21) Mon PRINTF :  |%-0*i|\n", 15, -1234567);
	printf("21) Vrai PRINTF : |%-0*i|\n", 15, -1234567);
	ft_printf("21) Mon PRINTF :  |%-0*i|\n", 15, -1234567);

}

void d(void)
{
    
    ft_printf("--------------------%%d--------------------\n");
    printf("01) Vrai PRINTF: |%d|\n", 42);
    ft_printf("01) Mon PRINTF : |%d|\n", 42);
    printf("02) Vrai PRINTF: |%d|\n", -42);
    ft_printf("02) Mon PRINTF : |%d|\n", -42);
    printf("03) Vrai PRINTF: |%-d|\n", -42);
    ft_printf("03) Mon PRINTF : |%-d|\n", -42);
    printf("04) Vrai PRINTF : |%-10d|\n", -42);
    ft_printf("04) Mon PRINTF :  |%-10d|\n", -42);
    printf("05) Vrai PRINTF : |%10d|\n", -42);
    ft_printf("05) Mon PRINTF :  |%10d|\n", -42);
    printf("06) Vrai PRINTF : |%010d|\n", -42);
    printf("06) Mon PRINTF  : |%010d|\n", -42);
    //neu co precision thi se in number va so 0 cho du precision,
     //neu co them width thi se ko in gi cho du width
    
    printf("10) Vrai PRINTF : |%010.3d|\n", 42);
    ft_printf("10) Mon PRINTF:   |%010.3d|\n", 42);
    printf("10a) Vrai PRINTF:|%10.3d|\n", 42);
    ft_printf("10a) Mon PRINTF: |%10.3d|\n", 42);
    printf("10b) Vrai PRINTF:|%10.3d|\n", -42);
    ft_printf("10b) Mon PRINTF: |%10.3d|\n", -42);
    printf("10c) Vrai PRINTF:|%-10.3d|\n", -42);
    ft_printf("10c) Mon PRINTF: |%-10.3d|\n", -42);
    printf("11) Vrai PRINTF : |%.10d|\n", -42);
    ft_printf("11) Mon PRINTF :  |%.10d|\n", -42);
    printf("12) Vrai PRINTF : |%-10d|\n", 42); // 0 is ignored when - exists
    ft_printf("12) Mon PRINTF :  |%-10d|\n", 42); // 0 is ignored when - exists
    printf("12a) Vrai PRINTF : |%-10d|\n", -42);
    ft_printf("12a) Mon PRINTF :  |%-10d|\n", -42); // 0 is ignored when - exists
    printf("13) Vrai PRINTF : |%.10d|\n", -42);
    ft_printf("13) Mon PRINTF :  |%.10d|\n", -42);
    printf("\n14) Vrai PRINTF : |%010d|\n", -42);
    ft_printf("14) Mon PRINTF :  |%010d|\n", -42);
    printf("14a) Vrai PRINTF : |%-010d|\n", -42);
    ft_printf("14a) Mon PRINTF :  |%-010d|\n", -42);
    printf("15) Vrai PRINTF : |%10d|\n", -42);
    ft_printf("15) Mon PRINTF :  |%10d|\n", -42);
    printf("16) Vrai PRINTF : |%-10d|\n", -42);
    ft_printf("16) Mon PRINTF :  |%-10d|\n", -42);
    printf("17) Vrai PRINTF : |%-*.1d|\n", 10, -42);
    ft_printf("17) Mon PRINTF :  |%-*.1d|\n", 10, -42);
    printf("18) Vrai PRINTF : |%-015.*d|\n", 10, -123);
    ft_printf("18) Mon PRINTF :  |%-015.*d|\n", 10, -123);
    
    // thu truong hop precision nho hon do dai cua so
    printf("19) Vrai PRINTF : |%015.*d|\n", 3, 1234567);
    ft_printf("19) Mon PRINTF :  |%015.*d|\n", 3, 1234567);
    printf("20) Vrai PRINTF : |%0*d|\n", 15, -1234567);
    ft_printf("20) Mon PRINTF :  |%0*d|\n", 15, -1234567);
    printf("21) Vrai PRINTF : |%-0*d|\n", 15, -1234567);
    ft_printf("21) Mon PRINTF :  |%-0*d|\n", 15, -1234567);
    printf("21) Vrai PRINTF : |%-0*d|\n", 15, -1234567);
    ft_printf("21) Mon PRINTF :  |%-0*d|\n", 15, -1234567);
	
// Extreme case in 42TESTER
	int zero = 0;
	char c = 'a';
	int neg = -2147483648;
	int pos = 2147483647;

    printf("23) Vrai PRINTF : |%0d, %0d, %0d, %0d|\n", zero, c, neg, pos);
    ft_printf("23) Mon PRINTF :  |%0d, %0d, %0d, %0d|\n", zero, c, neg, pos);
	
}


void hex(void)
{
	ft_printf("--------------------%%xX--------------------\n");
	printf("01) Vrai PRINTF: |%x|\n", 42);
	ft_printf("01) Mon PRINTF : |%x|\n", 42);
	
	printf("02) Vrai PRINTF: |%x|\n", -42); // so am
	ft_printf("02) Mon PRINTF : |%x|\n", -42);
	
	printf("03) Vrai PRINTF: |%-x|\n", -42);
	ft_printf("03) Mon PRINTF : |%-x|\n", -42);
	printf("04) Vrai PRINTF : |%-10x|\n", -42);
	ft_printf("04) Mon PRINTF :  |%-10x|\n", -42);
	printf("05) Vrai PRINTF : |%10x|\n", -42);
	ft_printf("05) Mon PRINTF :  |%10x|\n", -42);
	printf("06) Vrai PRINTF : |%010X|\n", -42);
	printf("06) Mon PRINTF  : |%010X|\n", -42);
		
	printf("10) Vrai PRINTF : |%010.3x|\n", 42);
	ft_printf("10) Mon PRINTF:   |%010.3x|\n", 42);
	
	printf("10a) Vrai PRINTF:|%10.3X|\n", 42);
	ft_printf("10a) Mon PRINTF: |%10.3X|\n", 42);
	printf("10b) Vrai PRINTF:|%10.3x|\n", -42);
	ft_printf("10b) Mon PRINTF: |%10.3x|\n", -42);
	printf("10c) Vrai PRINTF:|%-10.3x|\n", -42);
	ft_printf("10c) Mon PRINTF: |%-10.3x|\n", -42);
	printf("11) Vrai PRINTF : |%.10X|\n", -42);
	ft_printf("11) Mon PRINTF :  |%.10X|\n", -42);
	printf("12) Vrai PRINTF : |%-10X|\n", 42); // 0 is ignored when - exists
	ft_printf("12) Mon PRINTF :  |%-10X|\n", 42); // 0 is ignored when - exists
	printf("12a) Vrai PRINTF : |%-10X|\n", -42);
	ft_printf("12a) Mon PRINTF :  |%-10X|\n", -42); // 0 is ignored when - exists
	printf("13) Vrai PRINTF : |%.10X|\n", -42);
	ft_printf("13) Mon PRINTF :  |%.10X|\n", -42);
	printf("\n14) Vrai PRINTF : |%010X|\n", -42);
	ft_printf("14) Mon PRINTF :  |%010X|\n", -42);
	printf("14a) Vrai PRINTF : |%-010x|\n", -42);
	ft_printf("14a) Mon PRINTF :  |%-010x|\n", -42);
	printf("15) Vrai PRINTF : |%10x|\n", -42); 
	ft_printf("15) Mon PRINTF :  |%10x|\n", -42);
	printf("16) Vrai PRINTF : |%-10x|\n", -42); 
	ft_printf("16) Mon PRINTF :  |%-10x|\n", -42); 
	printf("17) Vrai PRINTF : |%-*.1x|\n", 10, -42);
	ft_printf("17) Mon PRINTF :  |%-*.1x|\n", 10, -42);
	
	printf("18) Vrai PRINTF : |%-015.*x|\n", 10, -123);
	ft_printf("18) Mon PRINTF :  |%-015.*x|\n", 10, -123);
	
	// thu truong hop precision nho hon do dai cua so
	printf("19) Vrai PRINTF : |%015.*x|\n", 3, 1234567);
	ft_printf("19) Mon PRINTF :  |%015.*x|\n", 3, 1234567);
	printf("20) Vrai PRINTF : |%0*x|\n", 15, -1234567);
	ft_printf("20) Mon PRINTF :  |%0*x|\n", 15, -1234567);
	printf("21) Vrai PRINTF : |%-0*x|\n", 15, -1234567);
	ft_printf("21) Mon PRINTF :  |%-0*x|\n", 15, -1234567);

	// Test case of 42FT_PRINTF
	int zero = 0;
	int num_neg = -42;
	char c = 'a';
	int neg = -2147483648;
	int pos = 2147483647;
	unsigned int max_u = 4294967295;
	long int long_neg = -2147478678364809;
	long int long_pos = 80948028776634027;

	printf("22) Vrai PRINTF : |%u, %x, %X|\n", num_neg, num_neg, num_neg);
	ft_printf("22) Mon PRINTF  : |%u, %x, %X|\n", num_neg, num_neg, num_neg);
	printf("23) Vrai PRINTF : |%x, %x, %x, %x, %x, %x, %x, %x|\n", c, neg, pos, max_u, max_u + 1, long_neg, long_pos, zero);
	ft_printf("23) Mon PRINTF  : |%x, %x, %x, %x, %x, %x, %x, %x|\n", c, neg, pos, max_u, max_u + 1, long_neg, long_pos, zero);
}

void u(void)
{
	ft_printf("--------------------%%u--------------------\n");
	printf("01) Vrai PRINTF: |%u|\n", 42);
	ft_printf("01) Mon PRINTF : |%u|\n", 42);
	
	printf("02) Vrai PRINTF: |%u|\n", -42); // so am
	ft_printf("02) Mon PRINTF : |%u|\n", -42);
	
	printf("03) Vrai PRINTF: |%-u|\n", -42);
	ft_printf("03) Mon PRINTF : |%-u|\n", -42);
	printf("04) Vrai PRINTF : |%-10u|\n", -42);
	ft_printf("04) Mon PRINTF :  |%-10u|\n", -42);
	printf("05) Vrai PRINTF : |%10u|\n", -42);
	ft_printf("05) Mon PRINTF :  |%10u|\n", -42);
	printf("06) Vrai PRINTF : |%010u|\n", -42);
	printf("06) Mon PRINTF  : |%010u|\n", -42);
		
	printf("10) Vrai PRINTF : |%010.3u|\n", 42);
	ft_printf("10) Mon PRINTF:   |%010.3u|\n", 42);
	
	printf("10a) Vrai PRINTF:|%10.3u|\n", 42);
	ft_printf("10a) Mon PRINTF: |%10.3u|\n", 42);
	printf("10b) Vrai PRINTF:|%10.3u|\n", -42);
	ft_printf("10b) Mon PRINTF: |%10.3u|\n", -42);
	printf("10c) Vrai PRINTF:|%-10.3u|\n", -42);
	ft_printf("10c) Mon PRINTF: |%-10.3u|\n", -42);
	printf("11) Vrai PRINTF : |%.10u|\n", -42);
	ft_printf("11) Mon PRINTF :  |%.10u|\n", -42);
	printf("12) Vrai PRINTF : |%-10u|\n", 42); // 0 is ignored when - exists
	ft_printf("12) Mon PRINTF :  |%-10u|\n", 42); // 0 is ignored when - exists
	printf("12a) Vrai PRINTF : |%-10u|\n", -42);
	ft_printf("12a) Mon PRINTF :  |%-10u|\n", -42); // 0 is ignored when - exists
	printf("13) Vrai PRINTF : |%.10u|\n", -42);
	ft_printf("13) Mon PRINTF :  |%.10u|\n", -42);
	printf("\n14) Vrai PRINTF : |%010u|\n", -42);
	ft_printf("14) Mon PRINTF :  |%010u|\n", -42);
	printf("14a) Vrai PRINTF : |%-010u|\n", -42);
	ft_printf("14a) Mon PRINTF :  |%-010u|\n", -42);
	printf("15) Vrai PRINTF : |%10u|\n", -42); 
	ft_printf("15) Mon PRINTF :  |%10u|\n", -42);
	printf("16) Vrai PRINTF : |%-10u|\n", -42); 
	ft_printf("16) Mon PRINTF :  |%-10u|\n", -42); 
	printf("17) Vrai PRINTF : |%-*.1u|\n", 10, -42);
	ft_printf("17) Mon PRINTF :  |%-*.1u|\n", 10, -42);
	
	printf("18) Vrai PRINTF : |%-015.*u|\n", 10, -123);
	ft_printf("18) Mon PRINTF :  |%-015.*u|\n", 10, -123);
	
	// thu truong hop precision nho hon do dai cua so
	printf("19) Vrai PRINTF : |%015.*u|\n", 3, 1234567);
	ft_printf("19) Mon PRINTF :  |%015.*u|\n", 3, 1234567);
	printf("20) Vrai PRINTF : |%0*u|\n", 15, -1234567);
	ft_printf("20) Mon PRINTF :  |%0*u|\n", 15, -1234567);
	printf("21) Vrai PRINTF : |%-0*u|\n", 15, -1234567);
	ft_printf("21) Mon PRINTF :  |%-0*u|\n", 15, -1234567);

	//Test case of Test42
	int zero = 0;
	int num_neg = -42;
	char c = 'a';
	int neg = -2147483648;
	int pos = 2147483647;
	unsigned int max_u = 4294967295;
	long int long_neg = -2147478678364809;
	long int long_pos = 80948028776634027;

	printf("22) Vrai PRINTF : |%u, %x, %X|\n", num_neg, num_neg, num_neg);
	ft_printf("22) Mon PRINTF  : |%u, %x, %X|\n", num_neg, num_neg, num_neg);
	printf("23) Vrai PRINTF : |%u, %u, %u, %u, %u, %u, %u, %u|\n", c, neg, pos, max_u, max_u + 1, long_neg, long_pos, zero);
	ft_printf("23) Mon PRINTF  : |%u, %u, %u, %u, %u, %u, %u, %u|\n", c, neg, pos, max_u, max_u + 1, long_neg, long_pos, zero);
} 
void p(void)
{
	int		*tab = malloc(sizeof(int) * 10);
	int		*tab2 = malloc(0);
	int		*tab3 = malloc(sizeof(int) * 20);
	int		*p = malloc(sizeof(int) * 10);
	
	
	ft_printf("--------------------%%p--------------------\n");			//perfect
	
	printf("01) Vrai PRINTF : |%p|\n", tab3);
	ft_printf("01) Mon PRINTF  : |%p|\n", tab3);
	printf("02) Vrai PRINTF : |%-p|\n", tab2);
	ft_printf("02) Mon PRINTF  : |%-p|\n", tab2);
	printf("03) Vrai PRINTF : |%---------p|\n", tab3);
	ft_printf("03) Mon PRINTF  : |%----------p|\n", tab3);
	printf("04) Vrai PRINTF : |%10p|\n", tab);
	ft_printf("04) Mon PRINTF  : |%10p|\n", tab);
	printf("05) Vrai PRINTF : |%-10p|\n", tab2);
	ft_printf("05) Mon PRINTF  : |%-10p|\n", tab2);
	printf("06) Vrai PRINTF : |%2p|\n", tab);
	ft_printf("06) Mon PRINTF  : |%2p|\n", tab);
	printf("07) Vrai PRINTF : |%-2p|\n", tab);
	ft_printf("07) Mon PRINTF  : |%-2p|\n", tab);
	printf("11) Vrai PRINTF : |%p|\n", "\0\0\0\0\0");
	ft_printf("11) Mon PRINTF  : |%p|\n", "\0\0\0\0\0");
	printf("12) Vrai PRINTF : |%20p|\n", "\0\0\0\0\0");
	ft_printf("12) Mon PRINTF  : |%20p|\n", "\0\0\0\0\0");
	printf("13) Vrai PRINTF : |%p|\n", "");
	ft_printf("13) Mon PRINTF  : |%p|\n", "");
	printf("14) Vrai PRINTF : |%p|\n", NULL);
	ft_printf("14) Mon PRINTF  : |%p|\n", NULL);
	printf("15) Vrai PRINTF : |%10p|\n", NULL);
	ft_printf("15) Mon PRINTF  : |%10p|\n", NULL);
	printf("16) Vrai PRINTF : |%-10p|\n", NULL);
	ft_printf("16) Mon PRINTF  : |%-10p|\n", NULL);
	
	// Test cases of Printf_Lover
	printf("-->|%-16.p|<--\n", p);
	ft_printf("-->|%-16.p|<--\n", p);
	printf("-->|%-16.0p|<--\n", p);
	ft_printf("-->|%-16.0p|<--\n", p);
	

	printf("-->|%-*.p|<--\n", -16, NULL);
	ft_printf("-->|%-*.p|<--\n", -16, NULL);
	free(tab);
	free(tab2);
	free(tab3);
	free(p);
}

void other_cases(void)
{
	ft_printf("--------------------%%Other Case with %--------------------\n");
	printf("01) Vrai PRINTF : |%|\n");
	ft_printf("01) Mon PRINTF  : |%|\n");
	printf("02) Vrai PRINTF : |%%|\n");
	ft_printf("02) Mon PRINTF  : |%%|\n");
	printf("03) Vrai PRINTF : |\%|\n");
	ft_printf("03) Mon PRINTF  : |\%|\n");
    
    printf("01) Vrai PRINTF: |%%|\n");
    ft_printf("01) Mon PRINTF : |%%|\n");
    printf("02) Vrai PRINTF: |%%|\n");
    ft_printf("02) Mon PRINTF : |%%|\n");
    printf("03) Vrai PRINTF: |%-%|\n");
    ft_printf("03) Mon PRINTF : |%-%|\n");
    printf("04) Vrai PRINTF : |%-10%|\n");
    ft_printf("04) Mon PRINTF :  |%-10%|\n");
    printf("05) Vrai PRINTF : |%10%|\n");
    ft_printf("05) Mon PRINTF :  |%10%|\n");
    printf("06) Vrai PRINTF : |%010%|\n");
    printf("06) Mon PRINTF  : |%010%|\n");
    
    printf("10) Vrai PRINTF : |%010.3%|\n");
    ft_printf("10) Mon PRINTF:   |%010.3%|\n");
    printf("10a) Vrai PRINTF:|%10.3%|\n");
    ft_printf("10a) Mon PRINTF: |%10.3%|\n");
    printf("10b) Vrai PRINTF:|%10.3%|\n");
    ft_printf("10b) Mon PRINTF: |%10.3%|\n");
    printf("10c) Vrai PRINTF:|%-10.3%|\n");
    ft_printf("10c) Mon PRINTF: |%-10.3%|\n");
    printf("11) Vrai PRINTF : |%.10%|\n");
    ft_printf("11) Mon PRINTF :  |%.10%|\n");
    printf("12) Vrai PRINTF : |%-10%|\n"); // 0 is ignored when - exists
    ft_printf("12) Mon PRINTF :  |%-10%|\n"); // 0 is ignored when - exists
    printf("12a) Vrai PRINTF : |%-10%|\n");
    ft_printf("12a) Mon PRINTF :  |%-10%|\n"); // 0 is ignored when - exists
    printf("13) Vrai PRINTF : |%.10%|\n");
    ft_printf("13) Mon PRINTF :  |%.10%|\n");
    printf("\n14) Vrai PRINTF : |%010%|\n");
    ft_printf("14) Mon PRINTF :  |%010%|\n");
    printf("14a) Vrai PRINTF : |%-010%|\n");
    ft_printf("14a) Mon PRINTF :  |%-010%|\n");
    printf("15) Vrai PRINTF : |%10%|\n");
    ft_printf("15) Mon PRINTF :  |%10%|\n");
    printf("16) Vrai PRINTF : |%-10%|\n");
    ft_printf("16) Mon PRINTF :  |%-10%|\n");
    printf("17) Vrai PRINTF : |%-*.1%|\n", 10);
    ft_printf("17) Mon PRINTF :  |%-*.1%|\n", 10);
    printf("18) Vrai PRINTF : |%-015.*%|\n", 10);
    ft_printf("18) Mon PRINTF :  |%-015.*%|\n", 10);
    
    // thu truong hop precision nho hon do dai cua so
    printf("19) Vrai PRINTF : |%015.*%|\n", 3);
    ft_printf("19) Mon PRINTF :  |%015.*%|\n", 3);
    printf("20) Vrai PRINTF : |%0*%|\n", 15);
    ft_printf("20) Mon PRINTF :  |%0*%|\n", 15);
    printf("21) Vrai PRINTF : |%-0*%|\n", 15);
    ft_printf("21) Mon PRINTF :  |%-0*%|\n", 15);
    printf("21) Vrai PRINTF : |%-0*%|\n", 15);
    ft_printf("21) Mon PRINTF :  |%-0*%|\n", 15);
	
}

int		main(void)
{
//	hex();
//  u();
//	i();
//  d();
//	c();
//	s();
//	p();
	other_cases();
	return (0);
}
