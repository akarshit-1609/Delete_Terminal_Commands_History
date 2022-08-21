//This Program is not working with sudo command or in the root terminal

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "file_checker.h"

int main()
{
      char bash_history[100];
      char zsh_history[100];
      char username[80];
      char home[] = "/home/";

      char *a = getenv("USER");
      if (a == NULL)
            return EXIT_FAILURE;
      strcpy(username, a);

      strcpy(bash_history, home);
      strcat(bash_history, username);
      strcat(bash_history, "/.bash_history");
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

      strcpy(zsh_history, home);
      strcat(zsh_history, username);
      strcat(zsh_history, "/.zsh_history");
      if (chfe(zsh_history))
      {
            FILE *r = NULL;
            r = fopen(zsh_history, "w");
            if (r == NULL)
            {
                  freopen(zsh_history, "w", r);
            }
            fclose(r);
      }
      
      return 0;
}
