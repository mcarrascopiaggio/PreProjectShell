#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - try with getenv
 *Return: 0
 */

int main(void)
{
char *my_env;
extern char **environ;
int i;
int j;
int ch;
char *var = "PATH";
char *arr;

my_env = getenv("PATH");/** to compare result*/

for (i = 0; environ[i] != NULL; i++)
{
	printf("var %d is %s\n", i, environ[i]);
	for (j = 0; environ[i][j] != '='; j++)
	{
	;
	}
	ch = strncmp(environ[i], var, j);
	if (ch == 0)
	{
		strtok(environ[i], "=");
		arr = (strtok(NULL, "="));
		printf("ARR is %s\n", arr);
	}

}

if (my_env)
	printf("the content of PATH i generated by getenv is: %s\n", my_env);
else
	printf("Var no found\n");
return (0);
}
