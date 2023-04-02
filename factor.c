#include "factor.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: void
 */
int main(int argc, char *argv[])
{
	FILE *fptr;
	size_t count;
	ssize_t line;
	char *buffer = NULL;


	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	fptr = fopen(argv[1], "r");
	if (fptr == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (1)
	{
		char *buffer = NULL;
		size_t count = 0;
		line = getline(&buffer, &count, fptr);

		if (line == -1)
		{
			free(buffer);
			break;
		}
		factorize(buffer);
		free(buffer);
	}
	return (0);
}
