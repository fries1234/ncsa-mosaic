sources = [
    'main.c',
    'gui.c',
    'gui-dialogs.c',
    'gui-menubar.c',
    'gui-documents.c',
    'gui-news.c',
    'newsrc.c',
    'gui-extras.c',
    'mo-www.c',
    'mo-dtm.c',
    'hotlist.c',
    'history.c',
    'annotate.c',
    'pan.c',
    'grpan.c',
    'grpan-www.c',
    'audan.c',
    'globalhist.c',
    'img.c',
    'picread.c',
    'xpmhash.c',
    'xpmread.c',
    'gifread.c',
    'pixmaps.c',
    'medcut.c',
    'mo-hdf.c',
    'hotfile.c',
    'child.c',
    'mailto.c',
    'readJPEG.c',
    'readPNG.c',
    'accept.c',
    'cciServer.c',
    'cciBindings.c',
    'cciBindings2.c',
    'support.c',
    'bla.c',
    'kcms.c',
    'md5.c',
    'proxy-dialogs.c',
    'proxy-misc.c',
    'gui-popup.c',
    'gui-ftp.c',
    'prefs.c',
    'hdf-browse.c'
]

exe = executable('Mosaic', sources, dependencies: [
    www2,
    Xmx,
    htmlw,
    nut,
    openmotif,
    libpng,
    libjpeg
],
    install: true
)

install_data(['com.github.fries1234.ncsa-mosaic.desktop'], install_dir: 'share/applications')
install_data(['com.github.fries1234.ncsa-mosaic.appdata.xml'], install_dir: 'share/metainfo')

install_data(
    [
        'com.github.fries1234.ncsa-mosaic-symbolic.svg',
        'com.github.fries1234.ncsa-mosaic.128px.png',
        'com.github.fries1234.ncsa-mosaic.64px.png',
        'com.github.fries1234.ncsa-mosaic.png'
    ],
    rename: [
        'symbolic/apps/com.github.fries1234.ncsa-mosaic-symbolic.svg',
        '128x128/apps/com.github.fries1234.ncsa-mosaic.png',
        '64x64/apps/com.github.fries1234.ncsa-mosaic.png',
        '256x256/apps/com.github.fries1234.ncsa-mosaic.png',

    ],
    install_dir: 'share/icons/hicolor'
)
