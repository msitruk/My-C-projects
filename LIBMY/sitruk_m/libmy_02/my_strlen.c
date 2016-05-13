/*
** my_strlen.c for my_strlen in /home/maxime/Rendus/23-03-16/sitruk_m/my_strlen
**
** Made by MAXIME Sitruk
** Login   <sitruk_m@etna-alternance.net>
**
** Started on  Sun Mar 20 05:24:35 2016 MAXIME Sitruk
** Last update Sun Mar 20 06:12:49 2016 MAXIME Sitruk
*/

int my_strlen(char *str)
{
  int	i;

  i = 0;
  while (*str != '\0')
    {
      i = i + 1;
      str = str + 1;
    }
  return (i);
}
