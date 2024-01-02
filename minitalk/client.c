#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void handle_acknowledgement(int signo)
{
	printf("Message received by server\n");
	exit(0);
}

int main(int ac, char **av)
{
	if(ac == 3)
	{
		int server_pid = atoi(av[1]);
		signal(SIGUSR1, handle_acknowledgment);
		kill(server_pid,SIGUSR2);
		printf("Message sent to server: %s\n", av[2]);
		pause();
	}
}

