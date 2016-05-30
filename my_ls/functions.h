#ifndef __include_file_h__
#define __include_file_h__
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <pwd.h>
#include <grp.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <errno.h>

struct stat perm;
struct dirent *entry;
struct passwd *pwd;
struct group *grp;

void 	my_putchar(char c);
void 	my_putstr(char 	*str);
void	my_put_nbr(int 	nb);
void	aff(char **argv, int i);
void 	illegal_opt(char **argv);
void    no_file_or_dir(char *argv);

int		my_strlen(char 	*str);
int 	l_part1(char	*name);
int 	l_part2(char	*name);
int  	ls_normal();
int  	ls_normal_arg(int  argc, char **argv);
int     ls_a();
int     ls_a_arg(char	**argv);
int 	main();
int     my_strcmp(char 	*s1, char 	*s2);
int		my_tablen(char* tab[]);
int		ls_l();
int     ls_l_arg(char	**argv);
int  	ls_A();
int     ls_A_arg(char	**argv);
int  	ls_d();
int     ls_d_arg(char	**argv);
int  	opt_choice(int 	argc, char	**argv);
int  	opt_no_file(int argc, char** argv);
int 	isFile_or_Directory(char* name);
int   	opt_file(int  argc,char** argv);
int		l_arg_1(int i, char	**argv);
int  normal_arg_1(int i, char **argv);

#endif
