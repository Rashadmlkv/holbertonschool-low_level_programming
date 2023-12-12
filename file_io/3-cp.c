#include "main.h"
/**
 * main - copy file to another one
 * @argc: count of arguments
 * @argv: arguments' string
 * Return: 97, 98, 99, 100 on error , 0 in success
 */
int main(int argc, char **argv)
{
	int fdfrom, fdto, r, w, len = 1024;
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
	fdfrom = open(argv[1], O_RDONLY);
	r = read(fdfrom, buff, 1024);
	if (fdfrom == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98); }
	fdto = open(argv[2], O_WRONLY | O_TRUNC);
	if (fdto == -1)
		fdto = open(argv[2], O_WRONLY | O_CREAT, 0664);
	w = write(fdto, buff, 0);
	if (fdto == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[2]);
		exit(99); }
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
