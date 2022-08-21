#include <sys/stat.h>

int chfe(char *f){
    struct stat bu;
    int e = stat(f ,&bu);
    if (e==0){
        return 1;
    }
    else {
        return 0;
    }
}