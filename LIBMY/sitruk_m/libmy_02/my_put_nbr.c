/*
** my_put_nb.c for my_put_nb in /home/maxime/Rendus/25-03-16/sitruk_m/my_put_nbr
**
** Made by MAXIME Sitruk
** Login   <sitruk_m@etna-alternance.net>
**
** Started on  Tue Mar 22 01:11:01 2016 MAXIME Sitruk
** Last update Wed Mar 23 00:46:49 2016 MAXIME Sitruk
*/

void	my_putchar(char c);
int	my_nb_len(int n)
{
  int	i = 0;

  while (n != 0)
    {
      i =  i + 1;
      n = n / 10;
    }
  return (i);
}
void	my_if_n_sup(int n, int size)
{
  int	i;
  char	nb[size];

  if (n > 0)
    {
      for (i = 0; i != size + 1; i = i + 1)
	{
	  nb[size - i] = n % 10;
	  n = n / 10;
	}
      for (i = 0; i != size; i = i + 1)
	my_putchar(nb[i + 1] + 48);
    }
}
void	my_if_n_inf(int n, int size)
{
  int	i;
  char	nb[size];

  if (n <0)
    {
      n =  -n;
      for (i = 0; i != size + 1; i= i + 1)
	{
	  nb[size - i + 1] = n % 10;
	  n = n / 10;
	}
      for (i = 0; i != size; i= i + 1)
	{
	  if (i == 0)
	    my_putchar(45);
	  else
	    my_putchar(nb[i + 1] + 48);
	}
    }
}
void	my_put_nbr(int n)
{
  int	size;

  size = my_nb_len(n);
  my_if_n_sup(n, size);
  my_if_n_inf(n, size);
  if (n == 0)
    my_putchar(48);
}
