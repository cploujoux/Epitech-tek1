/*
** my_getnbr.c for my_getnbr in /home/ploujo_c/rendu/Piscine_C_J07/lib/my
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Oct  7 23:45:42 2014 christophe ploujoux
** Last update Sat Apr 11 11:58:00 2015 Ploujoux Christophe
*/

int	my_getnbr(char *str)
{
  int	nb;
  int	signe;
  int	pos;

  nb = 0;
  pos = 0;
  signe = 1;
  while (str[pos] == '-')
    {
      signe = signe * -1;
      pos = pos + 1;
    }
  while (str[pos] != '\0')
    {
      if (str[pos] < '0' || str[pos] > '9')
	return (nb * signe);
      nb = nb * 10 + (str[pos] - '0');
      pos = pos + 1;
    }
  return (nb * signe);
}
