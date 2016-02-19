/*
** my_str_to_wordtab.c for my_str_to_wordtab.c in /home/iche_n/piscine_c/Libmy/iche_n/libmy_01
** 
** Made by ICHE nour el yakine
** Login   <iche_n@etna-alternance.net>
** 
** Started on  Wed Oct  7 14:54:19 2015 ICHE nour el yakine
** Last update Wed Oct  7 18:21:59 2015 ICHE nour el yakine
*/
#include <stdlib.h>

int	my_strlen(char *str);
char	*my_strdup(char *str);
char	*my_strncat(char *str1, char *str2, int n);

int     conditions(char str)
{
  if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z') || (str >= '0' && str <= '9'))
    return (1);
  return (0);
}

char    **my_str_to_wordtab(char *str)
{
  int   j;
  int   i;
  int   h;
  char  *chaine;
  char  **res;

  h = 0;
  i = 0;
  j = 0;
  res = malloc(my_strlen(str) * sizeof (char *));
  if (res == NULL)
    return (NULL);
  while (i < my_strlen(str))
    {
      while (str[h] != '\0' && conditions(str[h]) == 0)
	{
	  h++;
	}
      if (str[h] == '\0')
        return (res);
      i = h;
      while (conditions(str[h]) == 1)
	  h++;
      chaine = malloc(sizeof(char) * (h - i +1));
      my_strncat(chaine, &str[i], h - i);
      res[j++] = my_strdup(chaine);
      i = h + 1;
    }
  return (res);
}
