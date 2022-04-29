#include <dirent.h>
#include <errno.h>

int checkDir(char* directory) {
    DIR *dir = opendir (directory);
    if (dir) {
        closedir (dir);
        return 1;
    } else if (ENOENT == errno) {
        return 0;
    } else {
        return 0;
    }
}
