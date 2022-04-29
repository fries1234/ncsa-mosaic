#include <stdio.h>

int isFlatpak() {
    FILE *file;
    if ((file = fopen("/.flatpak-info", "r"))) {
        fclose (file);
        return 1;
    } else {
        return 0;
    }
}
