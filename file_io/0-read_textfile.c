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
	int fd, r, w;
	char *strptr = malloc(sizeof(char) * letters + 1);

	if (strptr == NULL || filename == NULL)
		return (0);

	fd = open(filename, 0);
	if (fd < 0)
		return (0);
	r = read(fd, strptr, letters);
	if (fd < 0)
		return (0);
	if (letter == 2000)
		w = write(2, strptr, r);
	else
		w = write(1, strptr, r);
	if (w < r)
	{
		return (0); }
	close(fd);
	return (r);
}
