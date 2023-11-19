#include "ft_printf.h"
#include <stdio.h>

// int main()
// {
// 	int d = 42;
// 	char *s = "Aamir, Zuhail";
// 	void *p = (void*)&d;
// 	unsigned int u = 12345;
// 	unsigned long x = 0xABCD1234;
// 	printf("Original -d %d s %s p %p \n", d,s,p);
// 	ft_printf("My ft_printf -d %d s %s p %p \n", d,s,p);
// 	printf("Original -s %s\n", s);
// 	ft_printf("My ft_printf -s %s\n", s);
// 	printf("Original -p %p\n", p);
// 	ft_printf("My ft_printf -p %p\n", p);
// 	printf("Original -u %u\n", u);
// 	ft_printf("My ft_printf -u %u\n", u);
// 	printf("Original -x %lx\n", x);
// 	ft_printf("My ft_printf -x %x\n", x);
// 	printf("Original -X %lX\n", x);
// 	ft_printf("My ft_printf -X %X\n", x);
// 	printf("Original -%%\n");
// 	ft_printf("My ft_printf -%%\n");
// }


// int main()
// {
//     int d = 42;
//     char *s = "Aamir, Zuhail";
//     void *p = (void*)&d;
//     unsigned int u = 12345;
//     unsigned long x = 0xABCD1234;

//     // Basic format specifiers
//     printf("Original -d %d s %s p %p u %u x %lx X %lX %%\n", d, s, p, u, x, x);
//     ft_printf("My ft_printf -d %d s %s p %p u %u x %x X %X %%\n", d, s, p, u, x, x);

//     // Width and precision modifiers
//     //printf("Original -d %-5d s %.8s p %20p u %010u x %#lx X %#lX\n", d, s, p, u, x, x, x);
//     ft_printf("My ft_printf -d %-5d s %.8s p %20p u %010u x %#x X %#X\n", d, s, p, u, x, x, x);

//     // Mixed format specifiers
//     //printf("Original -d %d s %-15s p %p u %u x %#lx X %#lX\n", d, s, p, u, x, x, x);
//     ft_printf("My ft_printf -d %d s %-15s p %p u %u x %#lx X %#lX\n", d, s, p, u, x, x, x);

//     // Multiple format specifiers in a single string
//     printf("Original -d %d s %s p %p u %u x %lx X %lX %% -d %d\n", d, s, p, u, x, x, d);
//     ft_printf("My ft_printf -d %d s %s p %p u %u x %lx X %lX %% -d %d\n", d, s, p, u, x, x, d);

//     // Special characters in the string
//     printf("Original -d %d s %s p %p u %u x %lx X %lX %% -\\n\n", d, s, p, u, x, x);
//     ft_printf("My ft_printf -d %d s %s p %p u %u x %lx X %lX %% -\\n\n", d, s, p, u, x, x);

//     return 0;
// }
