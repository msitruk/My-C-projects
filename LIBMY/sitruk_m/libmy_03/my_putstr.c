/*
** my_putstr.c for my_putstr in /home/maxime/Rendus/23-03-16/sitruk_m
**
** Made by MAXIME Sitruk
** Login   <sitruk_m@etna-alternance.net>
**
** Started on  Sun Mar 20 03:12:11 2016 MAXIME Sitruk
** Last update Sun Mar 20 12:13:21 2016 MAXIME Sitruk
*/

void	my_putchar(char c);
void	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str = str + 1;
    }
}
