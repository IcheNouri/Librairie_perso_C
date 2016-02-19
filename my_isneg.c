/*
** my_isneg.c for my_isneg.c in /home/iche_n/piscine_c/jour01/iche_n/my_isneg
** 
** Made by ICHE nour el yakine
** Login   <iche_n@etna-alternance.net>
** 
** Started on  Mon Sep 28 20:54:41 2015 ICHE nour el yakine
** Last update Mon Sep 28 21:08:54 2015 ICHE nour el yakine
*/
void    my_putchar(char c);

int	my_isneg(int n)
{
  int res;

  if (n >= 0)
    res = 1;
  else if (n < 0)
    res = 0;
  return (res);
}
