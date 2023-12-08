#include "main.h"
#define USAGE "Usage: cp file_from file_to\n"
#define READ_ERROR "Error: Can't read from file %s\n"
#define WRITE_ERROR "Error: Can't write to %s\n"
#define CLOSE_ERROR "Error: Can't close fd %d\n"
#define BUFFER_SIZE 1024
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - program that copies the content of a file to another
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: 1 on success, 0 on failure
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1], *file_to = argv[2];
	char buffer[BUFFER_SIZE];
	ssize_t rbytes, wbytes;
	int fd_from, fd_to;

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, READ_ERROR, file_from), exit(98);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, WRITE_ERROR, file_to), exit(99);
	while ((rbytes = read(fd_from, buffer,  BUFFER_SIZE)) > 0)
	{
		wbytes = write(fd_to, buffer, rbytes);
		if (wbytes != rbytes)
			dprintf(STDERR_FILENO, WRITE_ERROR, file_to), exit(99);
	}
	if (rbytes == -1)
		dprintf(STDERR_FILENO, READ_ERROR, file_from), exit(98);
	if (close(fd_from) == -1 || close(fd_to) == -1)
		dprintf(STDERR_FILENO, CLOSE_ERROR, fd_from), exit(100);
	return (0);
}

