#include <stdlib.h>

int	my_strlen(char *str);
char	*my_strcpy(char *dest, char *src);

char	*my_strdup(char *str)
{
  int	longueur;
  char	*str2;
  
  longueur = my_strlen(str);
  if (str != '\0')
    str2 = malloc(longueur + 1 * sizeof(char));
  my_strcpy(str2, str);
  return (str2);
}
