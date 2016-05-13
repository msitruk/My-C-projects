/*
** my_strcmp.c for  in /home/maxime/Rendus/24-03-16/sitruk_m/my_strcmp
**
** Made by MAXIME Sitruk
** Login   <sitruk_m@etna-alternance.net>
**
** Started on  Mon Mar 21 07:23:55 2016 MAXIME Sitruk
** Last update Fri Mar 25 12:43:20 2016 MAXIME Sitruk
*/

int	my_strlen(char *str);
int	my_smaller(int t1, int t2)
{
  int	ret;

  if (t1 == t2)
    ret = 0;
  else if (t1 > t2)
    ret = 1;
  else if (t1 < t2)
    ret = -1;
  return (ret);
}
int	my_strcmp(char *s1, char *s2)
{
  int	t1;
  int	t2;
  int	ret;
  int	i;

  t1 = my_strlen(s1);
  t2 = my_strlen(s2);
  ret = my_smaller(t1, t2);
  i = 0;
  if (ret == 0)
    {
      while (*s1 != '\0' && ret != 1 && ret != -1)
	{
	  if (s1[i] > s2[i])
	    ret = 1;
	  else if (s1[i] < s2[i])
	    ret = -1;
	  else
	    {
	      s1 = s1 + 1;
	      s2 = s2 + 1;
	    }
	  i = i + 1;
	}
    }
  return (ret);
}
