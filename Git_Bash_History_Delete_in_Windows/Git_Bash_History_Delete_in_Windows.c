#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "file_checker.h"

int main()
{
    char bash_history[1000];
    char *a = getenv("USERPROFILE");
    if (a == NULL)
        return EXIT_FAILURE;
    strcpy(bash_history, a);
    strcat(bash_history, "\\.bash_history");

    if (chfe(bash_history))
    {
        FILE *p = NULL;
        p = fopen(bash_history, "w");
        if (p == NULL)
        {
            freopen(bash_history, "w", p);
        }
        fclose(p);
    }
    return 0;
}
