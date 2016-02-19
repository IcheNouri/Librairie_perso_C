/*
** my_strcat.c for my_strcat.c in /home/iche_n/piscine_c/jour04/iche_n/my_strcat
** 
** Made by ICHE nour el yakine
** Login   <iche_n@etna-alternance.net>
** 
** Started on  Thu Oct  1 20:32:13 2015 ICHE nour el yakine
** Last update Wed Oct  7 20:19:26 2015 ICHE nour el yakine
*/

char	*my_strcat(char *str1, char *str2)
{
  int	i;
  int	h;

  i = 0;
  h = 0;

  while (str1[i] != '\0')
    {
      i++;
    }
  while (str2[h] != '\0')
    {
      str1[i] = str2[h];
      h++;
      i++;
    }
  return (str1);
}
