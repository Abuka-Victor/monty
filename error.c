#include "monty.h"

/**
 * error_f - Handles errors with lines in the monty file
 * @ln: This is the line number
 * @message: The message to be outputed to the screen
 *
 * Return: Null Void
 */
void error_f(int ln, char *message)
{
	dprintf(STDERR_FILENO, "L%d: %s\n", ln, message);
	exit(EXIT_FAILURE);
}
