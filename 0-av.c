#include <stdio.h>
#include <unistd.h>

/**
 * main - print the number of argument without using ac.
 *@ac: is the number of items in av
 *@av:is a NULL terminated array of strings
 *Return: 0
 */

int main(int ac, char **av)
{
int count = 0;
(void)ac;

for (count = 0; av[count] != NULL; count++)
{
printf("%s\n", av[count]);
}
printf("The numbner of arguments are %d\n", count);


return (0);
}
