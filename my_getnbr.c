/*
** my_getnbr.c for my_getnbr.c in /home/iche_n/piscine_c/jour05/iche_n/my_getnbr
** 
** Made by ICHE nour el yakine
** Login   <iche_n@etna-alternance.net>
** 
** Started on  Sat Oct  3 18:42:22 2015 ICHE nour el yakine
** Last update Tue Oct  6 21:19:52 2015 ICHE nour el yakine
*/
int	num(char *src)
{
  int	i;
  int	compteur;

  i = 0;
  compteur = 0;

  while ((src[i] == '-') || (src[i] == '+'))
    {
      if (src[i] == '-')
	compteur++;
      i++;
    }
  if ((compteur % 2) != 0)
    return (1);
  return (0);
}

int             my_number(char n)
{
  if (n >= '0' && n <= '9')
    return (1);
  else if ((n == '-') || (n == '+'))
    return (2);
  else
    return (0);
}
int	my_getnbr(char *str)
{
  int	val;
  int	i;

  val = 0;
  i = 0;
  while (my_number(str[i]) == 0)
    return (0);
  while (my_number(str[i]) == 2)
    i++;
  while (my_number(str[i]) == 1)
    {
      val = (val * 10) + (str[i] - '0');
      i++;
    }
  if (num(str) == 1)
    val *= -1;
  return (val);
}
