/*
** my_strcpy.c for my_strcpy.c in /home/iche_n/piscine_c/jour04/iche_n/my_strcpy
** 
** Made by ICHE nour el yakine
** Login   <iche_n@etna-alternance.net>
** 
** Started on  Thu Oct  1 12:43:12 2015 ICHE nour el yakine
** Last update Thu Oct  1 13:19:59 2015 ICHE nour el yakine
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
