#include <stdio.h>
/**
  *main - prints all arguments recieved
  *@argc: The number of arguments supplied
  *@argv: an array of pointers
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);
	return (0);
}
