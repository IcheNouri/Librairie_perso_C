/*
** my_strncat.c for my_strncat.c in /home/iche_n/piscine_c/jour04/iche_n/my_strncat
** 
** Made by ICHE nour el yakine
** Login   <iche_n@etna-alternance.net>
** 
** Started on  Thu Oct  1 20:58:45 2015 ICHE nour el yakine
** Last update Wed Oct  7 22:27:41 2015 ICHE nour el yakine
*/
char	*my_strncat(char *str1, char *str2, int n)
{
  int	i;
  int	h;

  i = 0;
  h = 0;
  while (str1[i] != '\0')
    {
      i++;
    }
  while (str2[h] != '\0' && h < n)
    {
      str1[i] = str2[h];
      h++;
      i++;
    }
  str1[i] = '\0';
  return (str1);
}
