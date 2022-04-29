#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "isFlatpak.h"
#include "checkDir.h"
#include "createDir.h"

char* flatpakCheck() {
  char *mosaicDirectory;
  char *homeDirectory = getenv ("HOME");

  if (isFlatpak()) {
    char *xdgdatahome = getenv ("XDG_DATA_HOME");
    return xdgdatahome;
  }

  mosaicDirectory = (char *)malloc((
    strlen (homeDirectory + strlen ("/") + strlen (".mosaic"))
  ));

  sprintf(mosaicDirectory, "%s/%s", homeDirectory, ".mosaic");
  
  if (!checkDir(mosaicDirectory))
    createDir (mosaicDirectory);

  return mosaicDirectory;
}
