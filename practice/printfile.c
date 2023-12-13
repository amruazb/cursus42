#include <stdio.h>
#include <fcntl.h>


int main()
{
    FILE *file = fopen("sampl.txt", "w");
    if(file == NULL)
    {
        perror("Error creating file");
        return (1);
    }
    const char *content =
        "Hello , How are you!\n let's have some chat\nthere is a new line here\n";
    fputs(content, file);

    fclose(file);
    file = fopen("myfile.txt", "r");

    if (file == NULL)
    {
        perror("Error opening file for reading");
        return 1;
    }
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("%s", buffer);
    }
    fclose(file);
    return (0);
}
