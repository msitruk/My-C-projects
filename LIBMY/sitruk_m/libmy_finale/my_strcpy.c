/*
** my_strcpy.c for my_strcpy.c in /home/maxime/Rendus/24-03-16/sitruk_m/my_strcpy
**
** Made by MAXIME Sitruk
** Login   <sitruk_m@etna-alternance.net>
**
** Started on  Sun Mar 20 23:41:20 2016 MAXIME Sitruk
** Last update Fri Mar 25 12:43:42 2016 MAXIME Sitruk
*/

int	my_strlen(char *src);
char	*my_strcpy(char *dest, char *src)
{
  int	i;
  int	j;

  i = my_strlen(src);
  j = 0;
  while (j != i)
    {
      dest[j] = src[j];
      j = j + 1;
    }
  dest[j] = src[j];
  return (dest);
}
