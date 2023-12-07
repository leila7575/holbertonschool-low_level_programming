#include "main.h"
#include <string.h>

/**
 *  create_file - creates a file
 * @filename: pointer to the name of the file
 * @text_content: string to be written to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t file, bytesw;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}
	bytesw = write(file, text_content, len);
	if (bytesw == -1)
	{
		close(file);
		return (-1);
	}

	close(file);

	return (1);
}
