#include <stdio.h>
/**
  *main - prints the num of arguments passed to it
  *@argc: the number of arg supplied
  *@argv: an array of pointers
  *Return: 0
  */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
