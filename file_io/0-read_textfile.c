#include "main.h"
/**
 * read_textfile - reads a text file and prints it to
 *  the POSIX standard output
 * @filename: file that we want to read content
 * @letters: number of letters that we want to read
 * Return: the actual number of letters it could read and print
 *if the file can not be opened or read, return 0
 *if filename is NULL return 0
 *if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int j;
	size_t i;
	char *b;

	if (filename == NULL)
	{
		return (0);
	}
	j = open(filename, O_RDONLY);
	if (j == -1)
	{
		return (0);
	}
	b = malloc(letters);
	if (b == NULL)
	{
		return (0);
	}
	i = read(j, b, letters);
	b[i] = '\0';
	write(STDOUT_FILENO, b, i);
	close(j);
	return (i);
}
