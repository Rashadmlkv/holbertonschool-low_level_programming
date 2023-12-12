#include "main.h"
/**
 * main - copy file to another one
 * @argc: count of arguments
 * @argv: arguments' string
 * Return: 97, 98, 99, 100 on error , 0 in success
 */
int main(int argc, char **argv)
{
	int fdfrom, fdto, r = 1, w, len = 1024;
	char *buff = malloc(sizeof(char) * len);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	if (buff == NULL)
		return (-1);
	if (argv[1] == NULL)
		argv[1] = "";
	else if (argv[2] == NULL)
		argv[2] = "";
	fdfrom = open(argv[1], buff, len);
	fdto = open(argv[2], buff, len);
	while (r > 0)
	{
		r = read(fdfrom, buff, len);
		w = write(fdto, buff, r);
		if (r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n",
				argv[1]), exit(98); }
		if (fd == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]), exit(99); }
	}
	fdfrom = close(fdfrom);
	fdto = close(fdto);
	if (fdfrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdfrom);
		exit(100); }
	else if (fdto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdto);
		exit(100); }
	return (0); }
