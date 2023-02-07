#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file & prints it to the POSIX stdout.
 * @filename: Pointer to the file name.
 * @letters: The #letters the function reads and prints.
 * Return: The actual number of letters it could read and print.
 * 0 if the filename is NULL || write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *buffer;
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fd);
	return (w);
}
