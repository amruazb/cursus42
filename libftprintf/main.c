#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int d = 42;
	char *s = "Aamir, Zuhail";
	void *p = (void*)&d;
	unsigned int u = 12345;
	unsigned long x = 0xABCD1234;

	printf("Original -d %d s %s p %p \n", d,s,p);
	ft_printf("My ft_printf -d %d s %s p %p \n", d,s,p);
	printf("Original -s %s\n", s);
	ft_printf("My ft_printf -s %s\n", s);
	printf("Original -p %p\n", p);
	ft_printf("My ft_printf -p %p\n", p);
	printf("Original -u %u\n", u);
	ft_printf("My ft_printf -u %u\n", u);
	printf("Original -x %lx\n", x);
	ft_printf("My ft_printf -x %x\n", x);
	printf("Original -X %lX\n", x);
	ft_printf("My ft_printf -X %X\n", x);
	printf("Original -%%\n");
	ft_printf("My ft_printf -%%\n");
}

