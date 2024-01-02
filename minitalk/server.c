#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int server_pid;

void handle_client_message(void)
{
	kill(server_pid, SIGUSR1);
}

int main()
{
	printf("Server PID: %d\n", getpid());
	signal(SIGUSR1, handle_client_message);
	while(1)
	{
		pause();
	}
}

