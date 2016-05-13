/*
** my_swap.c for my_swap in /home/maxime/Rendus/23-03-16/sitruk_m/my_swap
**
** Made by MAXIME Sitruk
** Login   <sitruk_m@etna-alternance.net>
**
** Started on  Sun Mar 20 06:59:07 2016 MAXIME Sitruk
** Last update Sun Mar 20 08:01:51 2016 MAXIME Sitruk
*/

void	my_swap(int *a, int *b)
{
  int bis;
  int bou;

  bis = *a;
  bou = *b;
  *a = bou;
  *b = bis;
}
