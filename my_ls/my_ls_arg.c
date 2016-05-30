#include "functions.h"

int  ls_a_arg(char **argv)
{
  DIR             *dir;
  int i;

  i = 2;
  while (i < my_tablen(argv))
  {
    if (isFile_or_Directory(argv[i]) != -1)
    {
      aff(argv, i);
      if ((dir = opendir(argv[i])) == NULL)
         return (EXIT_FAILURE);
      while ((entry = readdir(dir)) != NULL)
      {
        my_putstr(entry->d_name);
        my_putstr("\t\t");
      }
      my_putchar('\n');
      if (closedir(dir) == -1)
         return (EXIT_FAILURE);
    }
    i++;
  }
  return 0;
}

int  ls_A_arg(char **argv)
{

  DIR             *dir;
  int i;

  i = 2;
  while (i < my_tablen(argv))
  {
    if (isFile_or_Directory(argv[i]) != -1)
    {
      aff(argv, i);
      if ((dir = opendir(argv[i])) == NULL)
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
    }
    i++;
  }
  return 0;
}


int  ls_d_arg(char **argv)
{
  int   i;

  i = 2;
  while (i < my_tablen(argv))
  {
    if (isFile_or_Directory(argv[i]) != -1)
    {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
    else if (isFile_or_Directory(argv[i]) == -1)
    {
      no_file_or_dir(argv[i]);
    }
    i++;
  }
  return 0;
}


int  ls_normal_arg(int  argc, char **argv)
{
  int   i;

  i = 1;
  while (i < argc)
  {
    if (isFile_or_Directory(argv[i]) == 1)
    {
      aff(argv, i);
      my_putstr(argv[i]);
      my_putchar('\n');
      my_putchar('\n');
    }
    else if (isFile_or_Directory(argv[i]) == 0)
    {
      aff(argv, i);
      normal_arg_1(i,argv);
      my_putchar('\n');
    }
    else
    {
      no_file_or_dir(argv[i]);
      my_putchar('\n');
    }
    i++;
  }
  return (0);
}

int  normal_arg_1(int i, char **argv)
{
  DIR             *dir;

  if ((dir = opendir(argv[i])) == NULL)
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
