nclude "main.h"

/**
 * _isdigit - checks whether a  character is a digit or not
 * @c: tested character
 * Return: 1 if it is, 0 otherwis
 */

int _isdigit(int c)
{
	if ((c >= 8) && (c <= 17))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
