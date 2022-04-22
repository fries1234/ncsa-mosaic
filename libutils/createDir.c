#include <sys/stat.h>
#include <unistd.h>

void createDir(const char* directory) {
    mkdir(directory, 0777);
}
