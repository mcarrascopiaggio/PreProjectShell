#include <stdio.h>
#include <unistd.h>

/**
 *main - print the PID & PPDI
 *Return: 0;
 */

int main(void)
{
int pid = 0, ppid = 0;

pid = getpid();
ppid = getppid();
printf("The current PID is:%d\n", pid);
printf("The parent PID of the current process (%d) is: %d\n", pid, ppid);
return (0);
}
