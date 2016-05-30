#include "functions.h"

int isFile_or_Directory(char* name)
{
    DIR* directory = opendir(name);

    if(directory != NULL)
    {
     closedir(directory);
     return 0;
    }

    if(errno == ENOTDIR)
    {
     return 1;
    }

    return -1;
}

void    illegal_opt(char **argv)
{
    my_putstr("ls: illegal option -- ");
    my_putchar(argv[1][1]);
    my_putstr("\nusage: ls [-Aadl] [file ...]\n");
}

void    no_file_or_dir(char *argv)
{
    my_putstr("ls: ");
    my_putstr(argv);
    my_putstr(": No such file or directory\n");
}
