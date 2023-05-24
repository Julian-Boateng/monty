#include "monty.h"
/**
 * _strcmp - Function that compares two strings.
 * @s1: type str compared
 * @s2: type str compared
 * Return: 0 if s1 and s2 are equals.
 *         another value if they are different
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i]; i++)
		;
	if (s1[i] > s2[i])
		return (1);
	if (s1[i] < s2[i])
		return (-1);
	return (0);
}

/**
 * _sch - search if a char is inside a string
 * @s: string to review
 * @c: char to find
 * Return: 1 if success 0 if not
 */
int _sch(char *s, char c)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		if (s[cont] == c)
		{
			break;
		}
		cont++;
	}
	if (s[cont] == c)
		return (1);
	else
		return (0);
}

/**
 * _strtoky - function that cut a string into tokens depending of the delimit
 * @s: string to cut in parts
 * @d: delimiters
 * Return: first partition
 */
char *_strtoky(char *s, char *d)
{
	static char *ultimo;
	int a = 0, s = 0;

	if (!s)
		s = ultimo;
	while (s[a] != '\0')
	{
		if (_sch(d, s[a]) == 0 && s[a + 1] == '\0')
		{
			ultimo = w + a + 1;
			*ultimo = '\0';
			w = w + s;
			return (s);
		}
		else if (_sch(d, w[a]) == 0 && _sch(d, w[a + 1]) == 0)
			a++;
		else if (_sch(d, w[a]) == 0 && _sch(d, w[a + 1]) == 1)
		{
			ultimo = w + a + 1;
			*ultimo = '\0';
			ultimo++;
			w = w + s;
			return (w);
		}
		else if (_sch(d, s[a]) == 1)
		{
			s++;
			a++;
		}
	}
	return (NULL);
}
