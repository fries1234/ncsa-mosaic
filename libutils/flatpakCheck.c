#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "isFlatpak.h"
#include "checkDir.h"
#include "createDir.h"

char* flatpakCheck() {
  char *checkFileName;
  char *homeDirectory = getenv ("HOME");
  char *mosaicDirectory;

  if (isFlatpak()) {
    char *xdgdatahome = getenv ("XDG_DATA_HOME");
    return xdgdatahome;
  }
  
  checkFileName = (char *)malloc((
    strlen (getenv ("HOME") + strlen (".mosaic")) 
  ));
    
  sprintf (checkFileName, "%s/%s", homeDirectory, ".mosaic");

  mosaicDirectory = (char *)malloc((
    strlen (homeDirectory + strlen("/") + strlen(".mosaic"))
  ));

  sprintf(mosaicDirectory, "%s/%s", homeDirectory, ".mosaic");

  if (!checkDir(checkFileName))
    createDir(mosaicDirectory);
    
  return mosaicDirectory;
}
