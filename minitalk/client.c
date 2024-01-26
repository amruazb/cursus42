// #include <stdio.h>
// #include <stdlib.h>
// #include <signal.h>
// #include <unistd.h>

// void handle_acknowledgement(int signo)
// {
// 	printf("Message received by server\n");
// 	exit(0);
// }

// int main(int ac, char **av)
// {
// 	if(ac == 3)
// 	{
// 		int server_pid = atoi(av[1]);
// 		signal(SIGUSR1, handle_acknowledgment);
// 		kill(server_pid,SIGUSR2);
// 		printf("Message sent to server: %s\n", av[2]);
// 		pause();
// 	}
// }

#include "minitalk.h"

void killuser(char *message, int pid) 
{
    int i;
    char x;
    char bit;
    int shift;
    int check;

    i = 0;
    while (message[i] != '\0')
	{
        x = message[i];
        shift = 7;
        while (shift >= 0) {
            bit = (x >> shift) & 1;
            if (bit == 1)
                check = kill(pid, SIGUSR1);
            else
                check = kill(pid, SIGUSR2);
            shift--;
            usleep(300);
        }
        i++;
    }
    if (check == -1)
        ft_putstr("Wrong pid");
}


int checker(int ac, char **av)
{
    int i = 0;
    if (ac != 3) 
	{
        ft_putstr("Error: Enter three arguments");
        return 0;
    }
    while (av[1][i])
	{
        if (ft_isalpha(av[1][i]) == 1) {
            ft_putstr("Error: Enter only numbers");
            return 0;
        }
        i++;
    }
    return 1;
}

int main(int ac, char **av)
{
    int pid;
    char *message;

    if (!checker(ac, av))
        return 0;
    pid = ft_atoi(av[1]);
    if (pid <= 0)
	{
        ft_putstr("Wrong pid");
        return 0;
    }
    message = av[2];
    killuser(message, pid);
    return 0;
}
