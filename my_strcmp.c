/*
** my_strcmp.c for my_strcmp.c in /home/iche_n/piscine_c/jour04/iche_n/my_strcmp
** 
** Made by ICHE nour el yakine
** Login   <iche_n@etna-alternance.net>
** 
** Started on  Thu Oct  1 17:22:01 2015 ICHE nour el yakine
** Last update Thu Oct  1 22:02:07 2015 ICHE nour el yakine
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0'&& s2[i] != '\0')
    {
      if (s1[i] < s2[i])
	return (-1);
      else if (s1[i] > s2[i])
	return (1);
      i++;
    }
  if (s1[i] < s2[i])
    return (-1);
  else if (s1[i] > s2[i])
    return (1);
  return (0);
}
