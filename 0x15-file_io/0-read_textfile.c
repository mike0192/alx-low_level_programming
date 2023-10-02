#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: mike- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ed;
	ssize_t mm;
	ssize_t mike;
	ssize_t g;

	mm = open(filename, O_RDONLY);
	if (mm == -1)
		return (0);
	ed = malloc(sizeof(char) * letters);
	g = read(mm, ed, letters);
	w = write(STDOUT_FILENO, ed, g);

	free(ed);
	close(mm);
	return (mike);
}
