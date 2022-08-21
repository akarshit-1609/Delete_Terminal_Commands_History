//This Program is only run with sudo command or run in root terminal

#include <stdio.h>
#include <string.h>

#include "file_checker.h"

int main()
{
    if (chfe("/root/.bash_history"))
    {
        FILE *q = NULL;
        q = fopen("/root/.bash_history", "w");
        if (q == NULL)
        {
            freopen("/root/.bash_history", "w", q);
        }
        fclose(q);
    }

    if (chfe("/root/.zsh_history"))
    {
        FILE *s = NULL;
        s = fopen("/root/.zsh_history", "w");
        if (s == NULL)
        {
            freopen("/root/.zsh_history", "w", s);
        }
        fclose(s);
    }
}