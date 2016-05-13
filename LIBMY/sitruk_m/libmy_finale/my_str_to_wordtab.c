/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/maxime/Rendus/28-03-16/sitruk_m/my_str_to_wordtab
**
** Made by MAXIME Sitruk
** Login   <sitruk_m@etna-alternance.net>
**
** Started on  Thu Mar 24 04:28:19 2016 MAXIME Sitruk
** Last update Fri Mar 25 12:46:24 2016 MAXIME Sitruk
*/

#include <stdlib.h>
int	my_strlen(char *str);
int	my_word_count(char *str)
{
  int	i;
  int	count;
  int	counted;

  i = 0;
  count = 0;
  counted = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90) ||
	  (str[i] >= 97 && str[i] <= 122))
	{
	  if (counted == 0)
	    {
	      count = count + 1;
	      counted = 1;
	    }
	}
      else
	counted = 0;
      i = i + 1;
    }
  return (count);
}
int	my_first_if(int *i, int *word_size, char **tab, int *j, char *str)
{
  int	k;

  k = 0;
  if ((str[*i] >= 48 && str[*i] <= 57) || (str[*i] >= 65 && str[*i] <= 90) || (str[*i] >= 97 && str[*i] <= 122))
    *word_size = *word_size + 1;
  else
    {
      if (*word_size > 0)
	{
	  tab[*j] = malloc((1 + *word_size) * sizeof(char *));
	  if (tab[*j] == NULL)
	    return (1);
	  k = 0;
	  for (k = 0; k != *word_size; k = k + 1)
	    tab[*j][k] = str[(*i - *word_size) + k];
	  tab[*j][k] = '\0';
	  *j = *j + 1;
	  *word_size = 0;
	}
    }
  return (0);
}
int	my_word(char **tab, char *str)
{
  int	i;
  int	word_size;
  int	j;
  int	k;

  j = 0;
  word_size = 0;
  for (i = 0; str[i] != '\0'; i = i + 1)
    {
      if( my_first_if(&i, &word_size, tab, &j, str) == 1)
	return (1);
      if (((str[i] >= 48 && str[i] <= 57) || (str[i] >= 65 && str[i] <= 90) ||
	   (str[i] >= 97 && str[i] <= 122)) && (str[i+1] == '\0'))
	{
	  tab[j] = malloc((1 + word_size) * sizeof(char *));
	  if (tab[j] == NULL)
	    return (1);
	  for (k = 0; k != word_size; k = k + 1)
	    tab[j][k] = str[(i + 1 - word_size) + k];
	  tab[j][k] = '\0';
	  j = j + 1;
	  word_size = 0;
	}
    }
  tab[j] = NULL;
  return (0);
}
char	**my_str_to_wordtab(char *str)
{
  int	word_count;
  char	**tab;

  if (str == NULL)
    {
      return(NULL);
    }
  else
    {
      word_count = my_word_count(str);
      tab = malloc((1 + word_count) * sizeof(char *));
      if (tab == NULL)
	return (NULL);
      if (my_word(tab, str) == 1)
	return (NULL);
      return (tab);
    }
}
