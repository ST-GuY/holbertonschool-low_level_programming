#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int file, len = 0;
	ssize_t written;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_APPEND);

		if (file == -1)
		return (-1);

		if (text_content == NULL)
		{
			close(file);
			return (1);
		}
		while (text_content[len] != '\0')
		{
			len++;
		}
	written = write(file, text_content, len);

		if (written == -1 || (ssize_t)written != len)
		{
			close(file);
			return (-1);
		}
		close(file);
		return (1);
}
