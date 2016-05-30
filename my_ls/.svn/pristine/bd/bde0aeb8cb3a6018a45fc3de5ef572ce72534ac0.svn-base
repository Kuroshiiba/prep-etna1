#include "functions.h"

int  ls_a()
{
  DIR             *dir;

  if ((dir = opendir(".")) == NULL)
     return (EXIT_FAILURE);
  while ((entry = readdir(dir)) != NULL)
  {
     my_putstr(entry->d_name);
     my_putstr("\t\t");
  }
  my_putchar('\n');
  if (closedir(dir) == -1)
     return (EXIT_FAILURE);
  return (EXIT_SUCCESS);
}

int  ls_normal()
{
  DIR             *dir;

  if ((dir = opendir(".")) == NULL)
     return (EXIT_FAILURE);
  while ((entry = readdir(dir)) != NULL)
  {
    if (entry->d_name[0] != '.')
    {
      my_putstr(entry->d_name);
      my_putstr("\t\t");
    }
  }
  my_putchar('\n');
  if (closedir(dir) == -1)
     return (EXIT_FAILURE);
  return (EXIT_SUCCESS);
}

int  ls_A()
{
  DIR             *dir;

  if ((dir = opendir(".")) == NULL)
     return (EXIT_FAILURE);
  while ((entry = readdir(dir)) != NULL)
  {
    if (my_strcmp(entry->d_name, "..") != 0 && my_strcmp(entry->d_name, ".") != 0)
    {
      my_putstr(entry->d_name);
      my_putstr("\t\t");
    }
  }
  my_putchar('\n');
  if (closedir(dir) == -1)
     return (EXIT_FAILURE);
  return (EXIT_SUCCESS);
}

int   ls_l()
{
  DIR             *dir;

  if ((dir = opendir(".")) == NULL)
    return (EXIT_FAILURE);
  while ((entry = readdir(dir)) != NULL)
  {
    if (entry->d_name[0] != '.')
    {
      l_part1(entry->d_name);
      l_part2(entry->d_name);
    } 
  }
  my_putchar('\n');
  if (closedir(dir) == -1)
    return (EXIT_FAILURE);
  return (EXIT_SUCCESS);
}

int  ls_d()
{
  my_putstr(".\n");
  return (0);
}
