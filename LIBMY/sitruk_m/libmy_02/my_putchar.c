/*
** my_putchar.c for my_putchar in /home/maxime/Rendus/21-03-16/sitruk_m/my_putchar
**
** Made by MAXIME Sitruk
** Login   <sitruk_m@etna-alternance.net>
**
** Started on  Sat Mar 19 03:38:37 2016 MAXIME Sitruk
** Last update Fri Mar 25 10:59:07 2016 MAXIME Sitruk
*/

#include <unistd.h>
void my_putchar(char c)
{
  write(1, &c, 1);
}
