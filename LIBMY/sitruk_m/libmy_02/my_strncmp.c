/*
** my_strncmp.c for my_strncmp in /home/maxime/Rendus/24-03-16/sitruk_m/my_strstr
**
** Made by MAXIME Sitruk
** Login   <sitruk_m@etna-alternance.net>
**
** Started on  Fri Mar 25 06:43:40 2016 MAXIME Sitruk
** Last update Fri Mar 25 12:44:48 2016 MAXIME Sitruk
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (s1[i] != '\0' && s1[i] == s2[i] && i < n-1)
    {
      i = i + 1;
    }
  if (s1[i] < s2[i] && n != 0)
    {
      return (-1);
    }
  else if (s2[i] < s1[i] && n != 0)
    {
      return (1);
    }
  return (0);
}
