#include "main.h"

/**
* append_text_to_file - append text to a file
*
* @filename: filename
* @text_content: content to be append
*
* Return: (1) if successfully appended
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int op_file, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; )
			len++;
	}

	op_file = open(filename, O_WRONLY | O_APPEND);
	wr = write(op_file, text_content, len);

	if (op_file == -1 || wr == -1)
		return (-1);

	close(op_file);

return (1);
}
