#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buf[READ_BUF_SIZE * 8];
	int fd;
	ssize_t bytes;

	if (!filename | !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);

	close(fd);
	return (bytes);
}
