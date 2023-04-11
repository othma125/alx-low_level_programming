#include <stdlib.h>
#include <string.h>

/**
 * set_words - check the code
 * @words: set of words
 * @words_lengths: array
 * @str: string
 * Return: none
 */
void set_words(char **words, int *words_lengths, char *str)
{
	int i = 0, j, condition = 1, k = 0;

	do {
		if (str[i] == ' ')
			condition = 1;
		else if (condition)
		{
			words[k] = (char *)malloc(1 + words_lengths[k]);
			for (j = 0; str[i] != ' '; j++)
			{
				words[k][j] = str[i];
				i++;
			}
			condition = 0;
			k++;
			continue;
		}
		i++;
	} while (*(str + i) != '\0');
}

/**
 * strtow - check the code
 * @str: string
 * Return: set of string
 */
char **strtow(char *str)
{
	char **words;
	int words_count;
	int condition = 1;
	int i, j, *words_lengths;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	words_lengths = (int *)malloc(sizeof(int) * (strlen(str) / 2));
	if (words_lengths == NULL)
		return (NULL);
	i = 0;
	words_count = 0;
	do {
		if (str[i] == ' ')
			condition = 1;
		else if (condition)
		{
			words_count++;
			words_lengths[words_count - 1]++;
			condition = 0;
		}
		else
			words_lengths[words_count - 1]++;
		i++;
	} while (*(str + i) != '\0');
	words = (char **)malloc(sizeof(char *) * (1 + words_count));
	if (words == NULL)
		return (NULL);
	set_words(words, words_lengths, str);
	return (words);
}
