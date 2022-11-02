#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
/**
 * read_textfile- a function reads a text file and prints it to the
 * POSIX output
 * @filename: pointer to the filename
 * @letters: arguments of the filename
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t number_read, number_write;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));

	if (!buf)
		return (0);

	number_read = read(fd, buf, letters);
	number_write = write(STDOUT_FILENO, buf, number_read);
	close(fd);
	free(buf);
	return (number_write);
}
