#include "mlx.h"


void draw_player(int x, int y, int size, void *mlx, void *win)
{
    int color = 0x00FF00;  // Green color, you can change this
    int i, j;

    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size)
        {
            mlx_pixel_put(mlx, win, x + i, y + j, color);
            j++;
        }
        i++;
    }
}

 int main()
 {
     void *mlx;
     void *win;

     mlx = mlx_init();
     win = mlx_new_window(mlx, 500, 500, "Player Image");

     // Assuming you want to draw the player at coordinates (100, 100) with a size of 48
     draw_player(100, 100, 48, mlx, win);

     mlx_loop(mlx);

     return 0;
}
