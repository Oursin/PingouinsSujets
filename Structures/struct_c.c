/*
** struct.c for penguin in struct.c
**
** Made by Caviar de Canard
** Login   <oui>
**
** Started on  Tue Mar  7 11:16:49 2017 Caviar de Canard
** Last update Tue Mar  7 11:16:49 2017 Caviar de Canard
*/

#include <stdio.h>
#include "struct.h"

void	print_ape(char *pseudo, char grade, int iq, int breaks, float salary)
{
  printf("[my_ape]\n");
  printf("Pseudo: %s\n", pseudo);
  printf("Grade Corewar: %c\n", grade);
  printf("IQ: %d\n", iq);
  printf("Breaks per hour: %d\n", breaks);
  printf("Salary: %.2f\n\n", salary);
}

int	main(int ac, char **av)
{
  print_ape("oui", 'D', 5, 8765, 1645.30f);
  return (0);
}