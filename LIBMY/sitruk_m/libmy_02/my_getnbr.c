/*
** my_getnbr.c for my_getnbr.c in /home/maxime/Rendus/25-03-16/sitruk_m/my_getnbr
**
** Made by MAXIME Sitruk
** Login   <sitruk_m@etna-alternance.net>
**
** Started on  Tue Mar 22 04:02:45 2016 MAXIME Sitruk
** Last update Fri Mar 25 12:38:21 2016 MAXIME Sitruk
*/

void	my_put_nbr(int n);
void	my_putchar(char c);
int	my_strlen(char *str);
int	my_ten_power(int j, int inter)
{
  while (j != 0)
    {
      inter = inter * 10;
      j = j - 1;
    }
  return (inter);
}
void	my_clean_str(char *str, char *inter, int *j, int *moins)
{
  int	i;
  int	stop;
  int	stopmoins;

  i = 0;
  stop = 0;
  stopmoins = 0;
  while (str[i] != '\0' && stop != -1)
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  stopmoins = 1;
	  inter[*j] = str[i];
	  i = i + 1;
	  *j = *j + 1;
	}
      else if ((str[i] == '-'|| str[i] == '+') && stopmoins == 0)
	{
	  if (str[i] == '-')
	    moins = moins + 1;
	  i = i + 1;
	}
      else if (str[i] < '0' || str[i] > '9')
	stop = -1;
    }
}
void	my_string_to_int(int *j, int *x, char *inter, int *ret, int *size)
{
  while (*j > 0)
    {
      *x = inter[*j-1] - 48;
      *x = my_ten_power(*size -*j,*x);
      if (2147483647 - *ret >= *x)
	*ret = *ret + *x;
      else if (-*x - *ret == -2147483648)
	*ret = *ret + *x;
      else        *ret = 0;
      *x = 0;
      *j = *j - 1;
    }
}
int	my_getnbr(char *str)
{
  int	j;
  int	moins;
  int	size;
  int	ret;
  int	x;

  x = 0;
  ret = 0;
  size = my_strlen(str);
  char	inter[size];
  inter[0] = 0;
  j = 0;
  moins = 0;
  my_clean_str(str,inter,&j,&moins);
  size = j;
  my_string_to_int(&j,&x,inter,&ret,&size);
  if (moins % 2 != 0)
    ret = -ret;
  return (ret);
}
