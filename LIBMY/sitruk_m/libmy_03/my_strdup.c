/*
** my_strdup.c for my_strdup in /home/maxime/Rendus/28-03-16/sitruk_m/my_strdup
**
** Made by MAXIME Sitruk
** Login   <sitruk_m@etna-alternance.net>
**
** Started on  Thu Mar 24 03:21:22 2016 MAXIME Sitruk
** Last update Fri Mar 25 12:49:48 2016 MAXIME Sitruk
*/

#include <stdlib.h>
int	my_strlen(char *src);
char	*my_strcpy(char *dest, char *src);
char	*my_strdup(char *str)
{
  char	*newstr;
  int	str_size;

  str_size = my_strlen(str);
  newstr = malloc((str_size + 1) * sizeof(char));
  newstr = my_strcpy(newstr, str);
  return (newstr);
}
