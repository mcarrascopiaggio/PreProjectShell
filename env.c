#include <stdio.h>

/**
*main - diference bt env and environ
*@ac: cant values
*@av: vector
*@env: env
*Return: 0;
*/

int main(int ac, char **av, char **env)
{
extern char **environ;
(void)ac;
(void)av;

printf("the address of environ is %p\n", (void *)&environ);
printf("tha address of env is %p\n", (void *)&env);
printf("%s\n", *env);
return (0);
}
