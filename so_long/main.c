#include "mlx/mlx.h"
#include <stdio.h>
#include <unistd.h>

void animateBirds(int keycode, void *param)
{
	int *loop_count = (int *)param;
    int width = 128;
    int height = 112;
	int windowX = 0; // Initial X position of the window

	int i = 1;
	while(i <= 5)
	{
		char filename[100];
		snprintf(filename, sizeof(filename), "image128x112/parrot%d.xpm", i);
		void *img = mlx_xpm_file_to_image(mlx, filename, &width, &height);
		printf("Loading image: %s\n", filename);
		if (!img)
		{
			// Handle error if image loading fails
			printf("Failed to load image %s.\n", filename);
			return;
		}
		usleep(500000);//Add a delay before clearing the window
		mlx_clear_window(mlx, win); // Clear the window before drawing the next bird//here is the problem when i remove this line the image is not cleared and the next image is drawn on top of the previous image
		usleep(300000); // Add a delay (500,000 microseconds = 0.5 seconds) between each bird
		mlx_put_image_to_window(mlx, win, img, windowX, 0); // Adjust the positioning as needed
			windowX += 120; // Update the X position (adjust as needed)
		if (windowX > 950) // Reset the X position if it exceeds a certain limit
			windowX = 0;
		i++;
	}
	(*loop_count)++;
	if(*loop_count >= 10)
	{
		mlx_loop_end(mlx);
	}
}
// void animateBirds(void *mlx, void *win)
// {
//     int width = 32;
//     int height = 28;
//     int windowX = 0; // Initial X position of the window

//     while (1)
//     {
//         for (int i = 1; i <= 5; i++)
//         {
//             char filename[100];
//             snprintf(filename, sizeof(filename), "image32x28/bird%d.xpm", i);
//             printf("Loading image: %s\n", filename);
//             void *img = mlx_xpm_file_to_image(mlx, filename, &width, &height);
//             if (!img)
//             {
//                 // Handle error if image loading fails
//                 printf("Failed to load image %s.\n", filename);
//                 continue; // Continue to the next iteration of the loop
//             }

//             mlx_put_image_to_window(mlx, win, img, windowX, 0); // Set the window's position
//             usleep(3000000); // Add a delay (300,000 microseconds = 0.3 seconds) between each bird
//             mlx_clear_window(mlx, win); // Clear the window before drawing the next bird

//             windowX += 50; // Update the X position (adjust as needed)
//             if (windowX > 950) // Reset the X position if it exceeds a certain limit
//                 windowX = 0;
//         }
// 		usleep(3000000); // Add a delay (300,000 microseconds = 0.3 seconds) between each bird
//     }
// }


int main()
{
    void *mlx;
    void *win;
	// int     width = 32;
	// int     height = 28;

    mlx = mlx_init();
	if(!mlx)
	{
		printf("failed to initialize Minilibx.\n");
		return 1;
	}
    win = mlx_new_window(mlx, 800, 600, "so_long");
	usleep(90000);
	int loop_count = 0;
	mlx_do_key_autorepeatoff(mlx);
	mlx_hook(win, 2, 1L << 0, animateBirds, &loop_count);
    // void *img = mlx_xpm_file_to_image(mlx, "image128x112/parrot1.xpm", &width, &height);
    // mlx_put_image_to_window(mlx, win, img, 50,50);
    mlx_loop(mlx);
    return 0;
}


// int main()
// {
//     void    *mlx;
//     void    *win;
//     int     width = 32;
// 	int     height = 28;
//     mlx = mlx_init();
//     win = mlx_new_window(mlx, 1920, 1080, "so_long");
//     mlx_loop(mlx);
//     return 0;
// }

