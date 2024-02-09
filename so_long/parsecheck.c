#include "so_long.h"

int valid_mapfile(char *filename)
{
    const char *validExtension = ".ber";

    while(*filename && *validExtension)
    {
        if(*filename == *validExtension)
            filename++;
        validExtension++;
    }
    if(*filename != *validExtension)
    {
        ft_printf("Error\nWrong file! please give .ber,file");
        return 0;
    }
    else
        return 1;
}


