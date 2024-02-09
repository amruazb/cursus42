#include "so_long.h"
# include "mlx/mlx.h"


int main(int ac, char **av)
{
    int fd;
    struct Game buraq;

   if(ac != 2)
       return (ft_printf("give two arguments such as <./so_long> < map.ber> file"));
   fd = open(av[1],O_RDONLY);
   if (fd == -1)
   {
       ft_printf("Error: check file name!");
       return (1);
   }
   if(!valid_mapfile(av[1]))
       return (close(fd),1);
   buraq.map = parse_map(fd);


   // = init_game();

//	run_game(game);
	cleanup_game(struct game);
}

//void *mlx;
//	void	*mlx_win;
//	mlx = mlx_init();
//	mlx_win = mlx_new_window(mlx, 1920,1080, "Hello world!");
//	mlx_loop(mlx);
