#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile- reads a text file and prints it to the POSIX stdout
 * @filename: pointer to the file
 * @letters: the number of letters to print and read
 * Return: 0 if file cannot open or read and
 *           if the filename if NULL
 *           if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo, fr, fw;
	char *file;

	if (filename == NULL)
		return (0);
	file = malloc(sizeof(char) * letters);
	if (file == NULL)
		return (0);
	fo = open(filename, O_RDONLY);
	if (fo < 0)
	{
		free(file);
		return (0);
	}
	fr = read(fo, file, letters);
	if (fr < 0)
	{
		free(file);
		return (0);
	}
	fw = write(STDOUT_FILENO, file, fr);
	free(file);
	close(fo);
	if (fw < 0)
		return (0);
	return ((ssize_t)fw);
}
