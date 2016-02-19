/*
** my_strncpy.c for my_strncpy.c in /home/iche_n/piscine_c/jour04/iche_n/my_strncpy
** 
** Made by ICHE nour el yakine
** Login   <iche_n@etna-alternance.net>
** 
** Started on  Thu Oct  1 14:30:42 2015 ICHE nour el yakine
** Last update Thu Oct  1 17:21:27 2015 ICHE nour el yakine
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i < n && src[i] != '\0')
    {  
      dest[i] = src[i];
      i++;
    }
  if (i < n)
    while (dest[i] != '\0')
      {
	dest[i] = '\0';
	i++;
      }
  return(dest);
}
