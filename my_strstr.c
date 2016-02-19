/*
** my_strstr.c for my_strstr.c in /home/iche_n/piscine_c
** 
** Made by ICHE nour el yakine
** Login   <iche_n@etna-alternance.net>
** 
** Started on  Sat Oct  3 18:03:02 2015 ICHE nour el yakine
** Last update Sat Oct  3 21:30:57 2015 ICHE nour el yakine
*/
char	*my_strstr(char *str, char *to_find)
{
  int i;
  int j;
  
  j = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == to_find[j])
	j++;
      else
	j = 0;
      if (to_find[j] == '\0')
	{
	  j--;
	  i = i - j;
	  return (str + i);
	}
      i++;
    }
  return ("null");
}
