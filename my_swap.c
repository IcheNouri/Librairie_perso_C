/*
** my_swap.c for my_swap.c in /home/iche_n/piscine_c/jour03/iche_n/my_swap
** 
** Made by ICHE nour el yakine
** Login   <iche_n@etna-alternance.net>
** 
** Started on  Wed Sep 30 15:18:09 2015 ICHE nour el yakine
** Last update Wed Sep 30 15:53:44 2015 ICHE nour el yakine
*/

void	my_swap(int *a, int *b)
{
  int c;

  c = *a;
  *a = *b;
  *b = c;
}
