/*
** my_strcat.c for my_strcat in /home/maxime/Rendus/24-03-16/sitruk_m/my_strcat
**
** Made by MAXIME Sitruk
** Login   <sitruk_m@etna-alternance.net>
**
** Started on  Wed Mar 23 20:04:35 2016 MAXIME Sitruk
** Last update Fri Mar 25 12:40:18 2016 MAXIME Sitruk
*/

int	my_strlen(char *str);
char	*my_strcat(char *str1, char *str2)
{
  int	i;
  int	s1;

  i = 0;
  s1 = my_strlen(str1);
  while (str2[i] != '\0')
    {
      str1[s1 + i] = str2[i];
      i = i + 1;
    }
  str1[s1 + i] = '\0';
  return (str1);
}
