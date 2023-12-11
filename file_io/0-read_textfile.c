#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - reads textfile and prints contents + bytes written
 * @filename: name of file
 * @letters: count of bytes
 * Return: count of bytes written in succes, 0 in failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, tmp;
	char *strptr = malloc(sizeof(char) * letters + 1);

	if (strptr == NULL || filename == NULL)
		return (0);

	fd = open(filename, 0);
	if (fd < 0)
		return (0);
	tmp = read(fd, strptr, letters);
	if (fd < 0)
		return (0);
	fd = write(1, strptr, letters);
	if (fd < tmp)
		return (0);
	close(fd);
	return (tmp);
}
