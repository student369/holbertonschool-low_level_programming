#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	int df;
	pid_t my_pid;
	pid_t my_ppid;
	char *buff;

	my_pid = getpid();
	my_ppid = getppid();
	printf("%u\n", my_pid);
	printf("%u\n", my_ppid);
	return (0);
}
