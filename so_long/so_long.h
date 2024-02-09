#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdarg.h>
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "./mlx/mlx.h"

struct Game
{
    void    *mlx;
    char    **map;
};


int valid_mapfile(char *s);
int ft_printf(const char *format, ...);
char *get_next_line(int fd);

#endif
