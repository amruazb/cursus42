#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include <stddef.h>

// char *my_split(char *str, const char* delim) {
//     static char* p = 0;
//     if(str) p = str;
//     else if(!p) return 0;
//     str = p + strspn(p, delim);
//     p = str + strcspn(str, delim);
//     if(p == str) return p = 0;
//     p = *p ? *p = 0, p + 1 : 0;
//     return str;
// }

// int main() 
// {
    
// 	char *str = my_split("Aamir Zuhail Basheer", 32);
// 	while (*str) 
// 		printf("%s\n", *str++);
// 	free(str);
//     return 0;
// }


// char* my_split(char* str, const char delim) {
//     static char* p = 0;

//     if (str) {
//         p = str;
//     } else if (!p) {
//         return NULL;
//     }

//     str = p + strspn(p, &delim);
//     p = str + strcspn(str, &delim);

//     if (p == str) {
//         p = NULL;
//         return NULL;
//     }

//     if (*p) {
//         *p = '\0';
//         ++p;
//     } else {
//         p = NULL;
//     }

//     return str;
// }

// int main() 
// {
//     char* str = strdup("Aamir Zuhail Basheer");
//     while (*str)
//         printf("%c\n", *str++);
//     while (*str)
// 		free(str++);
//     return 0;
// }

// char *my_split(char **str, const char *delim) {
//     static char *p = NULL;
//     if (*str) p = *str;
//     else if (!p) return NULL;

//     char *start = p + strspn(p, delim);
//     p = start + strcspn(start, delim);

//     if (p == start) return p = NULL;

//     *str = p + (*p ? 1 : 0);
//     *p = '\0';

//     return start;
// }

// int main()
// {
// 	char *str;
// 	str = my_split("Hello world , kd fdspf fv",' ');
// 	while(*str)
// 	{
// 		printf("%s\n",*str++);
// 	}
// 	free(str); 
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char *my_split(char **str, const char *delim) 
// {
//     static char *p = NULL;
//     if (*str) p = *str;
//     else if (!p) return NULL;

//     char *start = p + strspn(p, delim);
//     p = start + strcspn(start, delim);

//     if (p == start) return p = NULL;

//     *str = p + (*p ? 1 : 0);
//     *p = '\0';

//     return start;
// }

// int main() 
// {
//     char *input_str = strdup("Aamir Zuhail Basheer");
//     char *str = input_str;

//     char *word;
//     while ((word = my_split(&str, " ")) != NULL) {
//         printf("%s\n", word);
//     }

//     free(input_str);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_split(char **str, const char *delim) {
    static char *p = NULL;
    if (*str) p = *str;
    else if (!p) return NULL;

    // Use a loop to find the position of the delimiter
    char *start = p;
    while (*start != '\0' && strchr(delim, *start) == NULL) {
        start++;
    }

    // Use strchr instead of strcspn to find the position of the delimiter
    p = strchr(start, *delim);

    if (p == start) return p = NULL;

    *str = p + (*p ? 1 : 0);
    *p = '\0';

    return start;
}

int main() 
{
    char *input_str = strdup("Aamir Zuhail Basheer");
    char *str = input_str;

    char *word;
    while ((word = my_split(&str, " ")) != NULL) {
        printf("%s\n", word);
    }

    free(input_str);

    return 0;
}

