// #include <stdio.h>
// #include <stdlib.h>
// #include <signal.h>
// #include <unistd.h>

// int server_pid;

// void handle_client_message(void)
// {
// 	kill(server_pid, SIGUSR1);
// }

// int main()
// {
// 	printf("Server PID: %d\n", getpid());
// 	signal(SIGUSR1, handle_client_message);
// 	while(1)
// 	{
// 		pause();
// 	}
// }

#include "minitalk.h"

void    ft_ser(int sig)
{
    static int  i;
    static char c;

    if(sig == SIGUSR1)
        c = (c << 1) | 1;
    if(sig == SIGUSR2)
        c = (c << 1) | 0;
    i++;
    if(i == 8)
    {
        i = 0;
        write(1, &c, 1);
        c = 0;
    }
}



int main(void)
{
    ft_putstr("Server PID:");
    printf("Process ID: %d\n", getpid());
    ft_putchar('\n');
    signal(SIGUSR1, ft_ser);
    signal(SIGUSR2, ft_ser);
    while (1)
        pause();
}