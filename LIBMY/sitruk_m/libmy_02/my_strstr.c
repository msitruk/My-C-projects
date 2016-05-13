/*
** my_strstr.c for my_strstr in /home/maxime/Rendus/24-03-16/sitruk_m/my_strstr
**
** Made by MAXIME Sitruk
** Login   <sitruk_m@etna-alternance.net>
**
** Started on  Thu Mar 24 01:20:34 2016 MAXIME Sitruk
** Last update Fri Mar 25 12:45:46 2016 MAXIME Sitruk
*/

int	my_strlen(char *str);
void	init(int *count, int *j)
{
  *count = 0;
  *j = 0;
}
char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	size_to_find;
  int	count;
  int	j;

  init(&count, &j);
  if (str != 0 && to_find != 0)
    {
      size_to_find = my_strlen(to_find);
      for (i = 0; str[i] != '\0'; i = i + 1)
	{
	  if (str[i] == to_find[j])
	    {
	      count = count + 1;
	      if (count == size_to_find)
		return (&str[i - size_to_find + 1]);
	      j = j + 1;
	    }
	  else
	    init(&count, &j);
	}
    }
  return ("null");
}
