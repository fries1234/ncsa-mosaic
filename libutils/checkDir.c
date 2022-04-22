#include <dirent.h>
#include <errno.h>
#include <stdlib.h>

int checkDir(char* directory) {
    DIR *dir = opendir(directory);
    if (dir) {
        closedir(dir);
        free (directory);
        return 1;
    } else if (ENOENT == errno) {
        free (directory);
        return 0;
    } else {
        free (directory);
        return 0;
    }
}
