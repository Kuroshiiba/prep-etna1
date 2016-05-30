#include "functions.h"

int 	l_part1(char	*name)
{
	stat(name,&perm);
	my_putstr((S_ISDIR(perm.st_mode))  ? "d" : "-");
	my_putstr((perm.st_mode & S_IRUSR) ? "r" : "-");
	my_putstr((perm.st_mode & S_IWUSR) ? "w" : "-");
	my_putstr((perm.st_mode & S_IXUSR) ? "x" : "-");
	my_putstr((perm.st_mode & S_IRGRP) ? "r" : "-");
	my_putstr((perm.st_mode & S_IWGRP) ? "w" : "-");
	my_putstr((perm.st_mode & S_IXGRP) ? "x" : "-");
	my_putstr((perm.st_mode & S_IROTH) ? "r" : "-");
	my_putstr((perm.st_mode & S_IWOTH) ? "w" : "-");
	my_putstr((perm.st_mode & S_IXOTH) ? "x" : "-");
	return 0;
}

int 	l_part2(char	*name)
{
	int	i;
	char *tmp;

	stat(name,&perm);  
    tmp = ctime(&perm.st_mtime);
	my_putchar('\t');
	my_put_nbr(perm.st_nlink);
	my_putchar('\t');
	pwd = getpwuid(perm.st_uid);
	my_putstr(pwd->pw_name);
	my_putchar('\t');
	grp = getgrgid(perm.st_gid);
	my_putstr(grp->gr_name);
	my_putchar('\t');
	my_put_nbr(perm.st_size);
	my_putchar('\t');
	for (i = 4; i < my_strlen(tmp) - 9; i++)
		my_putchar(tmp[i]);
	my_putchar('\t');
	my_putstr(name);
	my_putchar('\n');
	return 0;
}

int   ls_l_arg(char **argv)
{
  
  int i;

  i = 2;
  while (i < my_tablen(argv))
  {
    if (isFile_or_Directory(argv[i]) == 0)
    {
      l_arg_1(i, argv);
    }
    else if (isFile_or_Directory(argv[i]) == 1)
    {
      l_part1(argv[i]);
      l_part2(argv[i]);
    }
    else
    {
      my_putstr("ls: ");
      my_putstr(argv[i]);
      my_putstr(": No such file or directory\n");
    }
    i++;
  }
  return 0;
}

int		l_arg_1(int i, char	**argv)
{
	DIR             *dir;

	aff(argv, i);
	if ((dir = opendir(argv[i])) == NULL)
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
