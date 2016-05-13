/*
** my_strncpy.c for my_strncpy in /home/maxime/Rendus/24-03-16/sitruk_m/my_strncpy
**
** Made by MAXIME Sitruk
** Login   <sitruk_m@etna-alternance.net>
**
** Started on  Mon Mar 21 00:29:00 2016 MAXIME Sitruk
** Last update Fri Mar 25 12:45:16 2016 MAXIME Sitruk
*/

int	my_strlen(char *src);
char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;
  int	j;
  int	y;

  i = my_strlen(src);
  y = my_strlen(dest);
  if (n >= i)
    {
      j = 0;
      while (j != i ||( j != i && j != y))
	{
	  dest[j] = src[j];
	  j = j + 1;
	}
      dest[j] = '\0';
    }
  else if (n < i)
    {
      for (j = 0; j != n; j++)
	dest[j] = src[j];
    }
  return (dest);
}
