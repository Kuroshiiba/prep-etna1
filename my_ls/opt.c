#include "functions.h"

int  opt_choice(int argc, char** argv)
{
  if (argc == 1)
    ls_normal();
  else if (argc == 2 && argv[1][0] == '-')
  {
    opt_no_file(argc, argv);
  }
  else
  {
    opt_file(argc, argv);
  }
  return (0);
}

int  opt_no_file(int argc, char** argv)
{
  int a;
  int (*tab[118]) ();

  tab[65] = &ls_A;
  tab[97] = &ls_a;
  tab[100] = &ls_d;
  tab[108] = &ls_l;
  a = argv[1][1];
  if (argv[1][1] != 'a' && argv[1][1] != 'A' &&
      argv[1][1] != 'd' && argv[1][1] != 'l')
      illegal_opt(argv);
  else if (tab[a])
    a = tab[a](argc);
  return (0);
}

int   opt_file(int  argc,char** argv)
{
  int a;
  int (*tab[118]) ();

  if (argv[1][0] == '-')
  {
    tab[65] = &ls_A_arg;
    tab[97] = &ls_a_arg;
    tab[100] = &ls_d_arg;
    tab[108] = &ls_l_arg;
    a = argv[1][1];
    if (argv[1][1] != 'a' && argv[1][1] != 'A' &&
        argv[1][1] != 'd' && argv[1][1] != 'l')
        illegal_opt(argv);
    else if (tab[a])
      a = tab[a](argv);
  }
  else
    ls_normal_arg(argc,argv);
  return (0);
}
