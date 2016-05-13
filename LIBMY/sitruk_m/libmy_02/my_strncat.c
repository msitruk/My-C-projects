/*
** my_strncat.c for my_strncat in /home/maxime/Rendus/24-03-16/sitruk_m/my_strncat
**
** Made by MAXIME Sitruk
** Login   <sitruk_m@etna-alternance.net>
**
** Started on  Thu Mar 24 00:04:57 2016 MAXIME Sitruk
** Last update Fri Mar 25 13:04:53 2016 MAXIME Sitruk
*/

int	my_strlen(char *str);
char	*my_strncat(char *str1, char *str2, int n)
{
  int	i;
  int	s1;

  i = 0;
  s1 = my_strlen(str1);
  while (i != n)
    {
      str1[s1 + i] = str2[i];
      i = i + 1;
    }
  str1[s1 + i] = '\0';
  return (str1);
}
