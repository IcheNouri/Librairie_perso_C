/*
** my_strncmp.c for my_strncmp.c in /home/iche_n/piscine_c/jour04/iche_n/my_strncmp
** 
** Made by ICHE nour el yakine
** Login   <iche_n@etna-alternance.net>
** 
** Started on  Thu Oct  1 18:54:16 2015 ICHE nour el yakine
** Last update Thu Oct  1 22:25:23 2015 ICHE nour el yakine
*/
int	my_strncmp(char *s1, char *s2, int n)
{
  int   i;
  
  i = 0;
  while (*(s1 + 1) != '\0' && *(s2 + 1) && (i < n))
    {
      if (*(s1 + i) < *(s2 + i))
	return (-1);
      else if (*(s1 + i) > *(s2 + i))
	return (1);
      i++;
    }
  return(0);
}
