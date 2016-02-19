/*
** my_strlen.c for my_strlen.c in /home/iche_n/piscine_c/jour03/iche_n/my_strlen
** 
** Made by ICHE nour el yakine
** Login   <iche_n@etna-alternance.net>
** 
** Started on  Wed Sep 30 10:29:59 2015 ICHE nour el yakine
** Last update Wed Sep 30 11:34:50 2015 ICHE nour el yakine
*/

void	my_putchar(char c);

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (*str != '\0')
    {
      i++;
      str++;
    }
  return (i);
}
